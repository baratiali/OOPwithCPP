// C++ Public Inheritance 

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

//subclass (Public Inheritance)
class Student : public Person{
    // publicMember is public
    public:
        void display()
        {
            cout << "my name is " << name << endl;
        }
    // protectedMember is protected

    // privateMember is not accessible from PublicDerived

};


int main() {
    Student Adam;
    Adam.setName("Adam");
    Adam.display();

    //Adam.name = "Adam"; // protected members are not available 



    return 0;
}
