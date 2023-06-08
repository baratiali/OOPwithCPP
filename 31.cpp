// Nested Classes or Inner classes in C++

#include <iostream>
#include <string>

using namespace std;

// base class
class Animal {
    public:
        Animal()
        {
            cout << "Animal constructor" << endl;
        }
        int age;
        void walk()
        {
            cout << "Animal walks" << endl;
        }
};

//subclass 
class Tiger : virtual public Animal{
    public:
        Tiger()
        {
            cout << "Tiger constructor" << endl;
        }
};

class Lion : virtual public Animal{
    public:
        Lion()
        {
            cout << "Lion constructor" << endl;
        }
};

class Liger : public Tiger, public Lion{
    public:
        Liger()
        {
            cout << "Liger constructor" << endl;
        }
};


int main() {

    Liger Lucie;
    Lucie.walk();

    return 0;
}

/*
The provided C++ code demonstrates the solution to the Diamond Problem in Object-Oriented Programming using virtual inheritance.

The Diamond Problem occurs when a class (Liger in this example) inherits from two classes (Tiger and Lion here) which themselves inherit from a common base class (Animal in this example). This creates an ambiguity because the Liger class inherits the properties of the Animal class through multiple paths, causing a conflict. 

For instance, if the `Animal` class had a non-virtual method and both the `Tiger` and `Lion` classes overrode that method, it would be ambiguous which version of the method the `Liger` class should inherit.

In C++, the solution to the Diamond Problem is to use virtual inheritance. The `Tiger` and `Lion` classes are declared as inheriting from `Animal` using `virtual public Animal`. This ensures that only one copy of the `Animal` class's members is included in any object of the `Liger` class, thereby resolving the ambiguity.

In the `main()` function, an object of the `Liger` class is created and the `walk()` function is called. With virtual inheritance, the `walk()` function from the `Animal` class is correctly called without any ambiguity. The order of calling the constructors is from the topmost class to the bottommost class, i.e., `Animal` -> `Tiger` -> `Lion` -> `Liger`.

Remember, when dealing with multiple inheritance, virtual inheritance can be very useful in dealing with common base classes and to prevent multiple instances of the base class in the derived classes.
*/