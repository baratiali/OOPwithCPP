// C++ Calling and Passing Values to Base Class Constructor in Derived Class


#include <iostream>
#include <string>

using namespace std;

// base class
class Father {
    protected:
        int height;
};

class Mother {
    protected:
        string skinColor;
};

//subclass 
class Child : public Father, public Mother{
    public:
        Child(int x, string color) : Father(), Mother()
        {
            height = x;
            skinColor = color;
            cout << "Child class constructor " << endl;
        }
        void display()
        {
            cout << "Height is:" << height << endl
            << "skin color is:" << skinColor << endl;
        }

};

int main() {
    Child John(123, "Black");
    John.display();
    

    return 0;
}


/*
This code demonstrates how to call and pass values to base class constructors in a derived class in C++. Here, the base classes `Father` and `Mother` have protected members `height` and `skinColor`, respectively. 

The `Child` class is derived from both `Father` and `Mother`. In its constructor, it initializes the base class objects using `Father()` and `Mother()`. This is an example of calling the base class constructors from the derived class. In this case, since the base class constructors do not take any parameters, no arguments are passed to `Father()` and `Mother()`.

However, the code does not pass values to the base class constructors. Instead, it assigns values directly to the inherited members `height` and `skinColor` within the derived class constructor. The derived class constructor takes two parameters - an integer and a string, which are assigned to `height` and `skinColor`, respectively.

If you wanted to pass these values to the base class constructors instead, you would have to add appropriate constructors to the base classes. Here's an example of how you might do it:

```cpp
// base class
class Father {
    protected:
        int height;
    public:
        Father(int h): height(h) {}  // constructor takes an integer parameter
};

class Mother {
    protected:
        string skinColor;
    public:
        Mother(string color): skinColor(color) {}  // constructor takes a string parameter
};

//subclass 
class Child : public Father, public Mother{
    public:
        Child(int x, string color) : Father(x), Mother(color)  // passing values to base class constructors
        {
            cout << "Child class constructor " << endl;
        }
        void display()
        {
            cout << "Height is:" << height << endl
            << "skin color is:" << skinColor << endl;
        }

};

int main() {
    Child John(123, "Black");
    John.display();
    

    return 0;
}
```

In this modified version, `Father` and `Mother` have constructors that take parameters, and the `Child` constructor passes the appropriate values to the base class constructors.
*/