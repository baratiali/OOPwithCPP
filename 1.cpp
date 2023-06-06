#include <iostream>

using namespace std;

class HumanBeing{
    public:
        void display(){
            cout << "Hello I am a Human";

        }
};



int main()
{
    HumanBeing adam;
    adam.display();

    return 0;
}