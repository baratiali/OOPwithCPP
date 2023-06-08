//Overloading Increment and Decrement Operators in Prefix form

#include <iostream>
#include <string>

using namespace std;

// base class
class Marks{
    private:
        int mark;

    public:
        Marks()
        {
            mark = 0;
        }
        Marks(int m)
        {
            mark = m;
        }

        void YouMarkPlease()
        {
            cout << "Your mark is " << mark << endl;
        }

        void operator++()
        {
            mark += 1;
        }


        friend void operator--(Marks &);
};

void operator--(Marks &m)
{
    m.mark -= 1;
}

int main() {
    int x = 20;

    Marks adamsMark(30);
    adamsMark.YouMarkPlease();

    ++ adamsMark;
    adamsMark.YouMarkPlease();

    -- adamsMark;
    adamsMark.YouMarkPlease();
    return 0;
}