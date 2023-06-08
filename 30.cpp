// C++ Pure Virtual Functions, Abstract Classes 

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    public:
        virtual void introduce() = 0;
};

//subclass 
class Student : public Person{
    public:
        void introduce()
        {
            cout << "Hi I am a Student" << endl;                
        }
};

void Person :: introduce(){
    cout << "Hi I am a Person" << endl; 
    Person::introduce();
}



int main() {


    Student Alex;
    Alex.introduce();

    return 0;
}
/*
This code demonstrates the concept of pure virtual functions and abstract classes in C++. Let's go through each part of the code.

1. First, we are declaring a base class called `Person`. This class has a public pure virtual function `introduce()`. The `= 0` after the function declaration indicates that this function is pure virtual. The idea of a pure virtual function is that it should be overridden in a derived class; it does not have a body in the base class.

2. Then, we declare a derived class called `Student` that inherits from `Person`. This class overrides the `introduce()` function. When `introduce()` is called on an object of type `Student`, the message "Hi I am a Student" is printed.

3. After the `Student` class, you've defined a function `Person::introduce()`. This implementation contradicts the declaration of the `introduce()` function in the `Person` class as pure virtual (i.e., `= 0`). It should not have an implementation in the `Person` class; instead, it should be implemented in the derived classes.

4. Finally, in `main()`, an object of `Student` class is created, named `Alex`. `Alex.introduce()` will call the `introduce()` function that was overridden in the `Student` class and output "Hi I am a Student".

Please note, the base class in which a pure virtual function is declared is known as an abstract class, and objects of an abstract class cannot be created. They can only be used as base classes in inheritance hierarchy, and their functions can be accessed through the derived class objects.
*/