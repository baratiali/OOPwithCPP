// Private Inheritance in C++


#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    protected:
        string name;    

    public:
        //methods
        void setName(string input_name)
        {
            name = input_name;
        }
};

//subclass 
class Student : private Person{
    // publicMember is private
    // protectedMember is private
    // privateMember is not accessible from PrivateDerived
    public:
        void display()
        {
            cout << "my name is " << name << endl;
        }
        //to access to the setName()
        void setStudentName(string input_name)
        {
            setName(input_name);
        }
};

class GStudent : public Student{
    public:
        void setGStudentName(string iname)
        {
            setStudentName(iname);
        }
};


int main() {
    GStudent Adam;
    // Adam.setName("Adam"); // we dont have access to this function
    Adam.setGStudentName("Adam");
    Adam.display();


    //Adam.name = "Adam"; // protected members are not available 



    return 0;
}

/*
The code  demonstrates the concept of private inheritance in C++. Let's go through it.

1. You have a base class `Person` that has a protected member `name` and a public method `setName(string input_name)`. The method is used to set the value of `name`.

2. `Student` is a subclass that is derived from `Person` using private inheritance (indicated by `class Student : private Person`). When using private inheritance, all public and protected members of the base class are treated as private members of the derived class. This means they can be accessed from within the `Student` class, but not from outside it. Thus, in the `Student` class, `name` and `setName()` are accessible, but they're treated as private members.

   The `Student` class has a public method `display()`, which outputs the value of `name`. Additionally, it has a method `setStudentName(string input_name)`, which allows external code to set the value of `name` by calling the `setName()` method of `Person`.

3. `GStudent` is a subclass derived from `Student` with public inheritance. It has a method `setGStudentName(string iname)`, which sets the name by calling the `setStudentName()` method of `Student`.

4. In `main()`, an object of `GStudent` is created, named `Adam`. The statement `Adam.setName("Adam");` is commented out because `setName()` is not accessible. It's treated as a private member due to the private inheritance in `Student`.

   The name is instead set by calling `Adam.setGStudentName("Adam");`. Finally, `Adam.display();` is called to output the name.

The statement `Adam.name = "Adam";` is commented out because it's not allowed. Even though `name` is a protected member in `Person`, due to the private inheritance it's treated as a private member in `Student`, and hence it's not accessible in `main()` or in `GStudent`.

Private inheritance is less common than public inheritance, but it can be used when you want to hide the inherited members from outside classes while still being able to use them within the derived class.
*/