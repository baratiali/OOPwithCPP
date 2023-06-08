// Changing Access Level of Base Class Members in Derived Class in C++


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
    public:
        //Person :: name;//access declaration --> warning: access declarations are deprecated; use using declarations instead [-Wdeprecated]
        //using Base::foo;  // using declaration makes Base's foo accessible

        using Person :: name;
        using Person :: setName;

        void display()
        {
            cout << "my name is " << name << endl;
        }

};




int main() {
    Student adam;
    adam.setName("Adam");
    adam.display();
    return 0;
}

/*
This code demonstrates the use of the `using` keyword in C++ to change the access level of base class members in a derived class.

1. The base class is `Person`, which has a protected data member `name` and a public method `setName(string input_name)`. The `setName()` method is used to set the value of `name`.

2. `Student` is a subclass that is derived from `Person` using private inheritance (indicated by `class Student : private Person`). In private inheritance, all public and protected members of the base class are treated as private members of the derived class.

3. But in `Student` class, the `using` keyword is employed to make `Person::name` and `Person::setName` accessible as public members of `Student`. That means they can be accessed directly on an object of the `Student` class.

   The `Student` class also has a public method `display()` that prints the value of `name`.

4. In the `main()` function, an object `adam` of `Student` class is created. `setName()` is called on `adam` to set the `name` to "Adam", and then `display()` is called to print "my name is Adam".

This shows how you can use the `using` keyword to change the accessibility of base class members in a derived class. The `using` declaration can be particularly useful in private or protected inheritance when you want to expose specific base class members in the derived class.
*/