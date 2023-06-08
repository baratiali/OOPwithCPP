// C++ Overriding Base Class Methods in Derived Class


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
        }
};

int main() {
    Student John;
    John.introduce();

    return 0;
}

/*
This code demonstrates the concept of function overriding in C++. Overriding is a feature in object-oriented programming where a subclass provides a specific implementation of a method that is already provided by its base class.

1. The base class `Person` has a public method `introduce()` that prints "Hi I am a person".

2. The derived class `Student` is publicly derived from `Person`. It also has a method with the same name and signature `introduce()`, which prints "Hi I am a Student". This method overrides the `introduce()` method from `Person`.

3. In the `main()` function, an instance of `Student` named `John` is created. When `John.introduce()` is called, it executes the `introduce()` method of the `Student` class, not the one from `Person`. This is because the `Student` class has overridden the `introduce()` method from `Person`.

This is an important feature in object-oriented programming that allows for polymorphism, where a base class reference can be used to call a method that will be determined by the type of the object it refers to at runtime. In this example, we don't see runtime polymorphism because `John` is declared as `Student` not `Person`, but if we had a `Person` reference to a `Student` object, the `Student`'s `introduce()` would be called.
*/