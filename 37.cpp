//Overloading Increment and Decrement Operators in Prefix form

#include <iostream>
#include <string>

using namespace std;

// base class
class Marks{
    private:
        int mark;

    public:
        Marks()
        {
            mark = 0;
        }
        Marks(int m)
        {
            mark = m;
        }

        void YouMarkPlease()
        {
            cout << "Your mark is " << mark << endl;
        }

        Marks& operator++()
        {
            mark += 1;
            return *this;
        }

        // friend declaration for decrement operator
        friend Marks& operator--(Marks &);
};

// correct definition of decrement operator
Marks& operator--(Marks &m)
{
    m.mark -= 1;
    return m;
}

int main() {
    int x = 20;

    Marks adamsMark(30);
    adamsMark.YouMarkPlease();

    (++adamsMark).YouMarkPlease();

    (--adamsMark).YouMarkPlease();
    return 0;
}

/*
In this C++ program, the increment and decrement operators are overloaded for prefix usage. Prefix increment and decrement operators first perform the increment/decrement operation and then return the updated value. 

The `Marks` class has a private integer member, `mark`, which represents a student's mark. 

There are two constructors for the `Marks` class: 
1. A default constructor that initializes `mark` to 0.
2. A parameterized constructor that accepts an integer argument to initialize `mark`.

The class also has a method `YouMarkPlease()` to print the current value of `mark`.

The increment operator `++` is overloaded as a member function. It increments `mark` by 1 and then returns the updated object.

The decrement operator `--` is overloaded as a friend function. Friend functions have the ability to access private and protected members of the class. In this function, `mark` is decremented by 1 and the updated object is returned.

In the `main()` function:

1. A `Marks` object `adamsMark` is created with an initial `mark` of 30.
2. The `mark` is then displayed using the `YouMarkPlease()` method.
3. The prefix increment operator `++` is used to increment `adamsMark` by 1, and the updated `mark` is displayed.
4. Similarly, the prefix decrement operator `--` is used to decrement `adamsMark` by 1, and the updated `mark` is displayed.

This program is a good example of how operator overloading can be used in C++ to enable operators to work with user-defined types.
*/