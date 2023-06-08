// Order of Execution of Constructors and Destructors in Inheritance in C++



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
        Person()
        {
            cout << "Counstructor of the Person class called!" <<endl;
        }
        ~Person()
        {
            cout << "Destructor of the Person class called!" <<endl;
        }
};

//subclass 
class Student : public Person{
    public:
        Student()
        {
            cout << "Counstructor of the Student class called!" <<endl;
        }
        ~Student()
        {
            cout << "Destructor of the Student class called!" <<endl;
        }

        void display()
        {
            cout << "my name is " << name << endl;
        }

};




int main() {
    Student adam;
    //adam.setName("Adam");
    //adam.display();
    return 0;
}


/*
Output:
Counstructor of the Person class called!
Counstructor of the Student class called!
Destructor of the Student class called!
Destructor of the Person class called!
*/

/*
This code demonstrates the order of execution of constructors and destructors in the case of inheritance in C++.

1. The base class `Person` has a constructor and destructor which print messages indicating they have been called. The `Person` class also has a protected member `name` and a method `setName(string input_name)` to set the value of `name`.

2. `Student` is a subclass of `Person` and is publicly derived from `Person`. It also has a constructor and a destructor, both of which print messages when they are called. It also has a method `display()` that prints the value of `name`.

3. In `main()`, an instance of `Student` called `adam` is created. The `setName()` and `display()` methods are commented out, so the program only demonstrates the order of constructors and destructors.

The order of execution is:

   - When `adam` is created, first the `Person` constructor is called because `Student` is derived from `Person`. In C++, base class constructors are called before derived class constructors.
   
   - After the `Person` constructor completes, the `Student` constructor is called.

   - When `main()` ends and `adam` goes out of scope, the `Student` destructor is called first. In C++, the destructors are called in the reverse order of the constructors. That is, for derived classes, the destructor is called before the base class destructor.
   
   - Finally, the `Person` destructor is called.

This means that the order of constructor and destructor calls in C++ is "base then derived" for constructors, and "derived then base" for destructors. Your commented output is exactly what we would expect given this order.
*/