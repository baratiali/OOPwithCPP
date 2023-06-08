// Accessing the Overridden Methods in C++ 

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    public:
        void introduce()
        {
            cout << "Hi I am a person" << endl;
        }
};

//subclass 
class Student : public Person{
    public:
        void introduce()
        {
            cout << "Hi I am a Student" << endl;    //This one will be called
            Person::introduce();    // Method of the base class
        }
};

int main() {
    Student John;
    John.introduce();
    John.Person::introduce();   // to overwrite the method 

    return 0;
}


/*
This C++ code provides an example of accessing an overridden method in the base class from a derived class. The `Person` class has a method `introduce()` which is overridden in the `Student` class, which is derived from `Person`.

1. `Person::introduce()` is used in `Student::introduce()` to call the base class's version of the `introduce()` method. This results in both "Hi I am a Student" and "Hi I am a person" being printed when `Student::introduce()` is called, first from the derived class's implementation of `introduce()`, and then from the base class's implementation.

2. In the `main()` function, we create an object `John` of type `Student`. 

   - When we call `John.introduce()`, it first prints "Hi I am a Student", then calls `Person::introduce()` to print "Hi I am a person", as defined in the `Student` class's overridden `introduce()` method.
   
   - Then `John.Person::introduce()` is called to explicitly invoke the base class version of the `introduce()` method. This skips the `Student` class's overridden method entirely and directly prints "Hi I am a person".

This demonstrates how you can still access the base class's version of a method in a derived class, even if the derived class has overridden the method. This can be useful if you want to extend the base class's functionality rather than completely replacing it.
*/
