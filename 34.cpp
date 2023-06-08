// C++ Operator Overloading Introduction
#include <iostream>
#include <string>

using namespace std;

// base class
class Marks {
    private:
        int intmark;
        int extmark;

    public:
        Marks()
        {
            intmark = 0;
            extmark = 0;
        }
        Marks(int im, int em)
        {
            intmark = im;
            extmark = em;
        }
        void display()
        {
            cout << intmark << endl << extmark << endl;
        }

        Marks operator+(Marks m)
        {
            Marks temp;
            temp.intmark = intmark + m.intmark;
            temp.extmark = extmark + m.extmark;
            return temp;

        }



};


int main() {

    Marks m1(10, 20), m2(30,40);

    Marks m3 = m1 + m2;
    m3.display();


    return 0;
}

/*
This program demonstrates operator overloading in C++. Here's how it works:

1. A class named `Marks` is defined. This class has two private integer member variables `intmark` and `extmark`.

2. The class `Marks` includes three member functions:
   - A default constructor that initializes `intmark` and `extmark` to 0.
   - A parameterized constructor that accepts two arguments to initialize `intmark` and `extmark`.
   - A `display()` member function that prints out `intmark` and `extmark`.

3. The `operator+` function is a member function of `Marks` class. It is an overloaded version of the '+' operator so it can be used to add two `Marks` objects together. It takes another `Marks` object as its parameter, adds the `intmark` and `extmark` of the current object with the `intmark` and `extmark` of the parameter object respectively, and returns a new `Marks` object with these values.

4. In the `main()` function, two `Marks` objects `m1` and `m2` are created with initial values. 

5. These two objects are added together using the '+' operator, which calls the `operator+` function you defined. This operation returns a new `Marks` object, which is stored in `m3`.

6. The `display()` member function is called on `m3` to print the `intmark` and `extmark` of `m3`. 

In conclusion, operator overloading allows operators to have user-defined meanings on user-defined types (classes). This capability makes it possible to create more intuitive and clear code. For instance, the '+' operator is naturally associated with the operation of addition, so being able to use '+' to add two `Marks` objects makes the code more readable.
*/