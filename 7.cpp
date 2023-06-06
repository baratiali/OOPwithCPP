// Overloading Class Constructors

#include <iostream>
#include <string>

using namespace std;

class Human {
    private:
        string name;
        int age;

    public:
        //Constructors
        Human(){
            cout << "default constructor" << endl;
            name = "noname";
            age = 0;
        }
        Human(string inputName){
            cout << "constructor with name as the parameter" << endl;
            name = inputName;
            age = 0;
        }
        Human(int inputAge){
            cout << "constructor with age as the parameter" << endl;
            name = "noname";
            age = inputAge;
        }

        Human(int inputAge, string inputName){
            cout << "constructor with age and name as the parameters" << endl;
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

    Human Adam("Adam");
    Adam.display();

    Human John(40);
    John.display();

    Human Sara(40, "Sara");
    Sara.display();

    return 0;
}
