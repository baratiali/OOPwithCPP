// Default Class Constructor Parameters

#include <iostream>
#include <string>

using namespace std;

class Human {
    private:
        string name;
        int age;

    public:
        //Constructors


        Human(string inputName = "noname" , int inputAge = 0){
            cout << "overloaded constructor" << endl;
            name = inputName;
            age = inputAge;
        }
        // methods
        void display()
        {
            cout << name << " is " << age << " years old" << endl;
        }
};


int main() {
    Human Eva;
    Eva.display();

    Human Sara("Sara");
    Sara.display();

    Human Abrahm("Abrahm", 35);
    Abrahm.display();

    return 0;
}
