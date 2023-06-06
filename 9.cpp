// Destructors in a Class

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
            cout << "constructor called" << endl;

        }
        ~Human(){
            cout << "destructor called" << endl;
        }
        
        // methods
        void display()
        {
            cout << name << " is " << age << " years old" << endl;
        }
};


int main() {


    Human *abi;
    abi = new Human();
    
    delete abi;


    return 0;
}
