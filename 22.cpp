// C++ Multiple Inheritance 


#include <iostream>
#include <string>

using namespace std;

// base class
class Father {
    public:
        int height;
        void askFather()
        {
            cout << "\nam your father ask me what u want!";
        }

};
class Mother {
    public:
        string skinColor;
        void askMother()
        {
            cout << "\nam your mother, ask me what you want!";
        }

};

//subclass 
class Child : public Father, public Mother{
    public:
        void askParenth()
        {
            cout << "\nasking my parents " << endl;
        }
        void setColorandHeight(string iColor, int iHeight)
        {
            skinColor = iColor;
            height = iHeight;    
        }
        void display()
        {
            cout << "Height is:" << height << endl 
            << "Skin color is:" << skinColor;
        }

};




int main() {
    Child adam;
    adam.setColorandHeight("Black", 186);
    adam.display();
    adam.askFather();
    adam.askMother();


    return 0;
}
