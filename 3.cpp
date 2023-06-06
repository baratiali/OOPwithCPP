#include <iostream>
#include <string>

using namespace std;

class Human {
    public:
        string name;

        void introduce(){
            cout << "Hello I am " << name<< endl; 
        }
    
};



int main()
{
    Human Eva;  // in the stack
    Eva.name = "Eva";
    Eva.introduce();

    Human *Adam = new Human(); // create an Object dynamicly (in Heap)
    Adam->name = "Adam";
    Adam->introduce();

    return 0;
}