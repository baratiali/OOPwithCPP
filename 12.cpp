// C++ Static Methods in Classes

#include <iostream>
#include <string>

using namespace std;

class Human {

    public:
        static int human_Count;

        //Constructors
        Human(){
            human_Count++;
        }

        ~Human(){
        }
        
        // methods
        void humanTotal()
        {
            //cout << "There are " <<human_Count<< " in this room, "<< endl;
        }

        //static method
        static void humanCount(){   // we can use only static variables in static methods
                cout << "There are " << human_Count << " in this room, "<< endl;
        }
};

int Human::human_Count = 0;


int main() {

    cout << Human::human_Count << endl;  // we can access static variable of the objects, without even create an object
    Human Adam;
    Adam.humanTotal();

    Human John;
    John.humanTotal();

    Human Jack;

    Human::humanCount();

    return 0;
}
