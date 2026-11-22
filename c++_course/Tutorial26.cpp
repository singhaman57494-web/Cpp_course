//                                friend functions in c++

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    friend complex sumcomplex(complex o1, complex o2); // friend function diclare

    void printNumber()
    {
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2,sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
//  properties of friend functions

1. not in the scope of class.
2. since it is not in the scope of the class, it cannot be called from the object of
   that class. c1.sumcomplex() == Invalid.
3. can be invoked whithout the help of any object.
4. usually cantans the objects as arguments.
5. can be declared inside public or private section of the class.
6. it cannot access the members directly by their names and need onject_name.member_name
   to access any member.
*/