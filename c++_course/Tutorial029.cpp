//                            constructors in c++

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    /*constructor is a special member function with the same name as of the class.
    .it is used to initialize the objects of its class
    it is automatically invoked whenever an object is created.*/
    complex(void); // custructor declaration
    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}