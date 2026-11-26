//                            Destructor in c++

#include <iostream>
using namespace std;

//    Destructor never takes an argument not does it return any value

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Ths is the time when constructor is callad for object number." << count << endl;
    }

    ~num()
    {
        cout << "this is the time when my destructor is called for object number." << count << endl;
        count++;
    }
};

int main()
{

    cout << "we are inside our main function" << endl;
    cout << "creating first object N1" << endl;
    num N1;
    {
        cout << "Entering this block" << endl;
        cout << "creating two more objects" << endl;
        num N2, N3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}