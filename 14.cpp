// Inheritance, Poly Morphism 

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {

    public:
        string name;
        int age;

        //methods
        void setName(string input_name)
        {
            name = input_name;
        }
        void setAge(int input_age)
        {
            age = input_age;
        }

        //Constructors
        Person(){}

        //destructor
        ~Person(){}
};

//subclass
class Student : public Person{
    public:
        int id;

        void setId(int input_id)
        {
            id = input_id;
        }
        void introduce()
        {
            cout << "Hello I am "<< name << " and I am " << age << " years old" <<endl 
            << "My Student ID is: " << id << endl; 
        }
};


int main() {
    Student Adam;
    Adam.setName("Adam");
    Adam.setAge(25);
    Adam.setId(434543534);
    Adam.introduce();


    return 0;
}
