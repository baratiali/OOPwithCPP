// C++ Protected Access Modifier in Classes

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

        //Constructors
        Person(){}

        //destructor
        ~Person(){}
};

//subclass
class Student : public Person{
    public:
        void display()
        {
            cout << "my name is " << name << endl;
        }
};


int main() {
    Student Adam;
    Adam.setName("Adam");
    Adam.display();



    return 0;
}
