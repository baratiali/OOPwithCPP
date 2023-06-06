// C++ Static Variables and Members in Class 

#include <iostream>
#include <string>

using namespace std;

class Human {

    public:
        static int humanCount;

        //Constructors
        Human(){
            humanCount++;
        }

        ~Human(){
        }
        
        // methods
        void humanTotal()
        {
            cout << "There are " <<humanCount<< " in this room, "<< endl;
        }
};

int Human::humanCount = 0;


int main() {

    cout << Human::humanCount << endl;  // we can access static variable of the objects, without even create an object
    Human Adam;
    Adam.humanTotal();

    Human John;
    John.humanTotal();

    return 0;
}
