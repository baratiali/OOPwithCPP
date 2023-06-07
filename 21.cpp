// Order of Execution of Constructors and Destructors in Inheritance in C++

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
        Person()
        {
            cout << "Counstructor of the Person class called!" <<endl;
        }
        ~Person()
        {
            cout << "Destructor of the Person class called!" <<endl;
        }
};

//subclass 
class Student : public Person{
    public:
        Student()
        {
            cout << "Counstructor of the Student class called!" <<endl;
        }
        ~Student()
        {
            cout << "Destructor of the Student class called!" <<endl;
        }

        void display()
        {
            cout << "my name is " << name << endl;
        }

};




int main() {
    Student adam;
    //adam.setName("Adam");
    //adam.display();
    return 0;
}
