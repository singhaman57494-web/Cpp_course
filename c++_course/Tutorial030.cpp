//                         parameterized and default constructors in c++

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);

    void printNumber()
    {
        cout<<"your number is "<< a <<" + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)  //this is a parameterized constructor
{
    a = x;
    b = y;
    // cout<<"hello world"<<endl;
}

int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}