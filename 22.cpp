// C++ Multiple Inheritance 


#include <iostream>
#include <string>

using namespace std;

// base class
class Father {
    public:
        int height;
        void askFather()
        {
            cout << "\nam your father ask me what u want!";
        }

};
class Mother {
    public:
        string skinColor;
        void askMother()
        {
            cout << "\nam your mother, ask me what you want!";
        }

};

//subclass 
class Child : public Father, public Mother{
    public:
        void askParenth()
        {
            cout << "\nasking my parents " << endl;
        }
        void setColorandHeight(string iColor, int iHeight)
        {
            skinColor = iColor;
            height = iHeight;    
        }
        void display()
        {
            cout << "Height is:" << height << endl 
            << "Skin color is:" << skinColor;
        }

};




int main() {
    Child adam;
    adam.setColorandHeight("Black", 186);
    adam.display();
    adam.askFather();
    adam.askMother();


    return 0;
}
/*
This code demonstrates the concept of multiple inheritance in C++. In multiple inheritance, a derived class can inherit from more than one base class.

1. `Father` and `Mother` are base classes. `Father` has a public integer member `height` and a method `askFather()`. `Mother` has a public string member `skinColor` and a method `askMother()`.

2. The `Child` class is derived from both `Father` and `Mother` using public inheritance. This means that public and protected members of `Father` and `Mother` will be accessible as public and protected members of `Child`, respectively. 

    - The `Child` class has a method `askParents()` that prints a message.
    - It also has a method `setColorandHeight(string iColor, int iHeight)`. This method takes a string and an integer as input and assigns them to `skinColor` and `height`, respectively.
    - The `display()` method in `Child` prints the `height` and `skinColor`.

3. In the `main()` function, a `Child` object `adam` is created. The `setColorandHeight()` method is called on `adam` to set `skinColor` to "Black" and `height` to 186. 

    - `adam.display()` is then called to print the `height` and `skinColor`.
    - `adam.askFather()` and `adam.askMother()` are called to print the respective messages.

This code demonstrates how a derived class in C++ can inherit members and methods from more than one base class, allowing for more complex and flexible designs.
*/