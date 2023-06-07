// Changing Access Level of Base Class Members in Derived Class in C++

//*** this program doesnt work

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    protected:
        string name;    

    public:
        //methods
        void setName(string input_name)
        {
            name = input_name;
        }
};

//subclass 
class Student : private Person{
    public:
        //Person :: name;//access declaration --> warning: access declarations are deprecated; use using declarations instead [-Wdeprecated]
        //using Base::foo;  // using declaration makes Base's foo accessible
        
        using Person :: name;
        using Person :: setName;

        void display()
        {
            cout << "my name is " << name << endl;
        }

};




int main() {
    Student adam;
    adam.setName("Adam");
    adam.display();
    return 0;
}
