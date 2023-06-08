// C++ Virtual Function

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

class GStudent:public Student{
    public:
    /*
        void introduce()
        {
            cout << "Hi I am a Gratuated student" << endl;                
        }
    */
};

void whosThis(Person &p)
{
    p.introduce();
}



int main() {

    Person Adam;
    Student Alex;
    GStudent John;

    whosThis(Adam);
    whosThis(Alex);
    whosThis(John); 
    
    return 0;
}


/*
The code  demonstrates the concept of polymorphism through the use of virtual functions in C++. 

1. The base class is `Person`, which has a public virtual function `introduce()`. This function can be overridden in derived classes. Here, it outputs "Hi I am a Person".

2. The `Student` class is a subclass derived from `Person`. It overrides the `introduce()` function, which, when called on a `Student` object, outputs "Hi I am a Student".

3. `GStudent` is another subclass derived from `Student`. However, it does not override the `introduce()` function. Its implementation is commented out, so when `introduce()` is called on a `GStudent` object, it will use the `introduce()` function from the nearest ancestor in the inheritance hierarchy, which is the `Student` class.

4. `whosThis(Person &p)` is a function that accepts a reference to a `Person` object. When this function is called with an object, it calls the `introduce()` function on that object. Thanks to the nature of virtual functions, the correct `introduce()` function is called depending on the actual type of the object, allowing for polymorphic behavior.

5. In `main()`, an object of each class (`Person`, `Student`, and `GStudent`) is created. These objects are passed to `whosThis()`, which calls the correct `introduce()` function for each one.

   - For `Adam`, which is a `Person`, it will print "Hi I am a Person".
   - For `Alex`, which is a `Student`, it will print "Hi I am a Student".
   - For `John`, which is a `GStudent`, it will print "Hi I am a Student" because `GStudent` does not have its own implementation of `introduce()`.

This shows polymorphism where a base class reference (`Person &p` in `whosThis()`) is used to call the correct function depending on the actual object type at runtime.
*/