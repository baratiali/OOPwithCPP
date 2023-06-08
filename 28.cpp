// Polymorphism in C++ and Virtual Functions

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    public:
        virtual void introduce()
        {
            cout << "Hi I am a Person" << endl;             
        }
};

//subclass 
class Student : public Person{
    public:
        void introduce()
        {
            cout << "Hi I am a Student" << endl;                
        }
};

class Farmer:public Person{
    public:
        void introduce()
        {
            cout << "Hi I am a Farmer" << endl;                
        }

};

void whosThis(Person &p)
{
    p.introduce();
}



int main() {
    Farmer John;
    Student Alex;
       
    whosThis(John); 
    whosThis(Alex);


    return 0;
}
/*
The code demonstrates polymorphism in C++ through the use of virtual functions.

1. The base class is `Person`, which has a public virtual function `introduce()`. This function can be overridden in derived classes. In the `Person` class, the `introduce()` function prints "Hi I am a Person".

2. The `Student` class is a subclass derived from `Person`. It overrides the `introduce()` function, so when called on a `Student` object, it prints "Hi I am a Student".

3. The `Farmer` class is another subclass derived from `Person`. It also overrides the `introduce()` function. When `introduce()` is called on a `Farmer` object, it prints "Hi I am a Farmer".

4. `whosThis(Person &p)` is a function that takes a reference to a `Person` object. When this function is called with an object, it calls the `introduce()` function on that object. Due to the nature of virtual functions, the correct `introduce()` function will be called depending on the actual type of the object. This is polymorphic behavior.

5. In `main()`, an object of the `Farmer` class and an object of the `Student` class are created. These objects are passed to `whosThis()`, which calls the correct `introduce()` function for each one.

    - For `John`, who is a `Farmer`, the output will be "Hi I am a Farmer".
    - For `Alex`, who is a `Student`, the output will be "Hi I am a Student".

This showcases polymorphism in C++, where the correct function to call is determined at runtime based on the actual type of the object.
*/