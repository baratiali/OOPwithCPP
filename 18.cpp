// Protected Inheritance in C++

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    protected:
        string name;    // protected membeber. it is also available in subclasses but not any others

    public:
        //methods
        void setName(string input_name)
        {
            name = input_name;
        }
};

//subclass 
class Student : protected Person{
    // publicMember is protected
    // protectedMember is protected
    // privateMember is not accessible from ProtectedDerived
    public:
        void display()
        {
            cout << "my name is " << name << endl;
        }
        //to access to the setName()
        void setStudentName(string input_name)
        {
            setName(input_name);
        }


};


int main() {
    Student Adam;
    // Adam.setName("Adam"); // we dont have access to this function
    Adam.setStudentName("Adam");
    Adam.display();

    //Adam.name = "Adam"; // protected members are not available 



    return 0;
}
