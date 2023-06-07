// Private Inheritance in C++

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
    // publicMember is private
    // protectedMember is private
    // privateMember is not accessible from PrivateDerived
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

class GStudent : public Student{
    public:
        void setGStudentName(string iname)
        {
            setStudentName(iname);
        }
};


int main() {
    GStudent Adam;
    // Adam.setName("Adam"); // we dont have access to this function
    Adam.setGStudentName("Adam");
    Adam.display();


    //Adam.name = "Adam"; // protected members are not available 



    return 0;
}
