#include <iostream>
#include <string>

using namespace std;

class HumanBeing {
    public:
        string name;

        void introduce(){
            cout << "Hello I am " << name<< endl; 
        }
    

};



int main()
{
    HumanBeing Eva;
    Eva.name = "Eva";
    Eva.introduce();

    return 0;
}