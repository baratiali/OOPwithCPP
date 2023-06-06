// Friend Function

#include <iostream>
#include <string>

using namespace std;

class Human {

    private:
        string name;
        int age;


    public:


        //Constructors
        Human(string iname, int iage){
            name = iname;
            age = iage;

        }

        ~Human(){
        }
        
        // methods
        void tellme(){
            cout << name << endl << age <<endl;
        }

    friend void display(Human man);
};


void display(Human man);


int main() {

    Human Adam("Adam", 30);
    display(Adam);


    return 0;
}


void display(Human man){
    cout << man.name << endl << man.age <<endl;
}