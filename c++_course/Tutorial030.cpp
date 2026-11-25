//                         parameterized and default constructors in c++

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);

    void printNumber()
    {
        cout<<"your number is "<< a <<" + " << b << " i " << endl;
    }
};

Complex::Complex(void) // this is a default constructor
{
    a = 10;
    b = 20;
    cout<<"hello world"<<endl;
}

int main()
{
    Complex a;
    a.printNumber();
    return 0;
}