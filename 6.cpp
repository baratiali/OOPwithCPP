// Class Constructors 
// Constructors have to be in Public

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
            cout << "Constructor is called when you create an Object of Human" << endl;
            name = "noname";
            age = 0;
        }
        void display()
        {
            cout << name << " is " << age << " years old" << endl;
        }
};


int main() {
    Human Eva;
    Eva.display();

    return 0;
}
