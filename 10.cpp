// C++ Destructors to Release Resources with example

#include <iostream>
#include <string>

using namespace std;

class Human {
    private:
        string *name;
        int *age;

    public:
        //Constructors
        Human(int inputAge, string inpuName){
            name = new string;
            age = new int;

            *name = inpuName;
            *age = inputAge;
        }

        ~Human(){
            delete name;
            delete age;
            cout << "all memories are released" << endl;
        }
        
        // methods
        void display()
        {
            cout << *name << " is " << *age << " years old" << endl;
        }
};


int main() {

    Human *adam = new Human(25, "Adam");
    adam->display();
    adam->~Human();

    return 0;
}
