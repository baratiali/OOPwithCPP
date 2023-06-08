// Local Classes in C++

#include <iostream>
#include <string>

using namespace std;

void studentList();

int main() {
    studentList();

    return 0;
}

void studentList()
{
    class Student{
        public:
            string name;
            int age;

            void display()
            {
                cout << "Student name: " << name << endl
                << "Studen age: " << age << endl;
            }
    };
    Student Adam;
    Adam.name = "Adam";
    Adam.age = 18;
    Adam.display();
}

/*
The code you've provided is a demonstration of a local class in C++. A local class is a class defined inside a function or a block, and it can only be used within that function or block. 

In this example:

1. `studentList()` is a function that defines a local class named `Student`. This `Student` class has two public member variables `name` and `age`, and a member function `display()`.

2. The `display()` function prints the `name` and `age` of the `Student` object.

3. Inside the `studentList()` function, an object `Adam` of class `Student` is created. The `name` and `age` fields are set for `Adam`, and `Adam.display()` is called to print these details.

4. In the `main()` function, the `studentList()` function is called, which in turn executes the code within the `studentList()` function.

Please note that objects of the local class can be declared only in the enclosing function, and members of the local class have no access to the enclosing function's local variables unless they are static or global. 

Also, C++ does not allow local classes to have static data members. Local classes can have static member functions, but they must not access non-static members of the local class.
*/