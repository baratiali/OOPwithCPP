// C++ this Keyword

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    private:
        int age;

    public:
        void setAge(int age)
        {
            this -> age = age;  // without this, we it will show a wrong value
        }
        void showAge()
        {
            cout << "Hi I am " << this ->  age << " years old" << endl; // It is not nessery to use this
        }
};


int main() {
    Person John;
    John.setAge(25);
    John.showAge();


    return 0;
}


/*
In this code, the `this` keyword is used in the context of a class in C++. `this` is a pointer that points to the object which invokes the member function, allowing access to the members of that object. It's automatically passed to all nonstatic member function calls.

The `Person` class has a private member `age` and two public member functions `setAge()` and `showAge()`:

1. In the `setAge(int age)` function, `this -> age` refers to the `age` member of the `Person` class, whereas the `age` passed as a parameter to `setAge` is a local variable of the function. Without using `this`, there would be a conflict between the class member `age` and the local variable `age`, and the compiler would assume you're referring to the local variable. Thus, `this -> age = age` correctly assigns the passed value to the `age` member of the `Person` class.

2. In the `showAge()` function, `this -> age` is used to print the age of the `Person`. While it's not necessary to use `this` here because there's no naming conflict, it can sometimes be helpful for code clarity, especially in larger classes where it might be less obvious which variables are members and which are local.

The `main()` function creates an instance of `Person` named `John`, sets his age to 25 using the `setAge()` function, and prints it with the `showAge()` function.
*/