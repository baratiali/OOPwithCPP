#include <iostream>
#include <string>

using namespace std;

class Human {
    public:
        string name = "X";

        void introduce();
    
};

// string Human::name = "Y";    // its not a static and not possible

// defining the method outside of the class
void Human:: introduce(){
            cout << "Hello I am " << Human :: name << endl; 
            }


int main()
{
    Human Eva;  // in the stack
    Eva.name = "Eva";
    Eva.introduce();

    Human *Adam = new Human(); // create an Object dynamicly (in Heap)
    //Adam->name = "Adam";
    Adam->introduce();

    return 0;
}