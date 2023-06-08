// C++ Calling Methods Using Base Class Type

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    public:
        void introduce()
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

void whosThis(Person *p)
{
    p->introduce();
}

/*other ways
void whosThis(Person *p)
{
    p->introduce();
}
void whosThis(Person &p)
{
    p.introduce();
}
*/

int main() {
    Student John;
    John.introduce();   // from Student
    whosThis(&John); // from Person

    /*2,3th way
    whosThis(&John);
    whosThis(John);
    */

    return 0;
}

/*
This C++ code illustrates the use of a base class type to call methods, a phenomenon known as static or early binding. The `Person` class has a method `introduce()`, and `Student` (derived from `Person`) also has a method with the same name.

The function `whosThis(Person *p)` accepts a pointer to a `Person` object. Inside this function, `p->introduce()` calls the `introduce()` method from the `Person` class, not the one from the `Student` class, even though `p` is actually pointing to a `Student` object. This is because the type of the pointer `p` is `Person*`, and the compiler uses this type to resolve the call to `introduce()` at compile time.

In the `main()` function, `John.introduce()` correctly calls `Student::introduce()` because `John` is a `Student`. However, `whosThis(&John)` calls `Person::introduce()`, not `Student::introduce()`, because the `introduce()` call in `whosThis` is resolved using the type of the pointer, not the type of the object the pointer points to.

This is a form of static or early binding, where the method to call is determined at compile time based on the type of the reference or pointer to the object, not the type of the object itself. If you wanted to call the appropriate `introduce()` method based on the actual type of the object (i.e., `Student::introduce()` for a `Student` object), you would need to make `introduce()` a virtual function in the `Person` class, a concept known as dynamic or late binding in C++.
*/