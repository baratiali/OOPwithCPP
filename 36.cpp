//Overloading Short Hand Operators

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

        void operator+=(int bounusmark)
        {
            mark = mark + bounusmark;
        }

        friend void operator-=(Marks &curObject, int redMark);
};

void operator-=(Marks &curObject, int redMark)
{
    curObject.mark -= redMark;
}

int main() {
    int x = 20;

    Marks adamsMark(30);
    adamsMark.YouMarkPlease();

    adamsMark += x;
    adamsMark.YouMarkPlease();

    adamsMark -= 10;
    adamsMark.YouMarkPlease();
    return 0;
}

/*
This program demonstrates overloading the shorthand operators "+=" and "-=" in C++.

Here's a step-by-step breakdown of what's happening in the code:

1. A class named `Marks` is defined. This class has a private member `mark` that holds the mark for a student.

2. `Marks` has three member functions:
   - A default constructor that initializes `mark` to 0.
   - A parameterized constructor that accepts an argument to initialize `mark`.
   - A `YouMarkPlease()` function that displays the mark of the student.

3. The `operator+=` function is a member function of `Marks` class. It is an overloaded version of the '+=' operator, so it can be used to increment the `mark` of a `Marks` object by a specified amount. It accepts an integer and increments the `mark` member of the object accordingly.

4. The `operator-=` function is not a member function of the `Marks` class. It's a friend function, which means it can access private and protected members of the class. It is an overloaded version of the '-=' operator, so it can be used to decrement the `mark` of a `Marks` object by a specified amount. This function accepts a reference to a `Marks` object and an integer, and decrements the `mark` member of the object by the integer.

5. In the `main()` function, a `Marks` object `adamsMark` is created with an initial mark of 30. The mark is then displayed using the `YouMarkPlease()` function.

6. The '+=' operator is used to increment `adamsMark` by 20. Since the `operator+=` function was defined in the `Marks` class, this operation increments `adamsMark.mark` by 20.

7. The mark is displayed again using the `YouMarkPlease()` function, showing that it has been incremented.

8. The '-=' operator is used to decrement `adamsMark` by 10. Since the `operator-=` function was defined outside of the `Marks` class, this operation decrements `adamsMark.mark` by 10.

9. The mark is displayed one last time using the `YouMarkPlease()` function, showing that it has been decremented.

This is a good demonstration of how operator overloading can make your C++ code more intuitive and readable.
*/