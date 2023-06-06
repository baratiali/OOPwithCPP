#include <iostream>
#include <string>

using namespace std;

class Human {
    private:
        int age;
        int getAgeAfterFiveYears(){
            return age - 5;
        }

    public:
        string name = "X";

        void setAge(int new_age){
            age = new_age;
        }
        
        void showAge(){
            cout << "age: " << getAgeAfterFiveYears() << endl;
        }
};


int main() {
    Human Eva;
    Eva.setAge(25);
    Eva.showAge();

    return 0;
}
