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

complex::complex(void) // this is a default constructor
{
    a = 10;
    b = 20;
    cout<<"hello world"<<endl;
}

int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

//**********************properties of constructor************************/

/*
1. it should be declared in the public section of the class.
2. they ae automatically invoked whenever the object is created.
3. they cannot return values and do not have return types.
4. it can have default arguments
5. we cannot refer to their
*/