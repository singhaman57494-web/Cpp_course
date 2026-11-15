//                                  Header files & Operators

#include <iostream>
/*
. There are two types of header files
1. system header files : it comes with the compiler
2. user defined header files: it is written by programmer
*/
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout <<"operator in c++"<<endl;
    cout <<"Following are the types of operators in c++"<<endl;

    // Arithmetic operator
    cout<<"The value of a + b is : "<< a + b <<endl;
    cout<<"The value of a - b is : "<< a - b <<endl;
    cout<<"The value of a * b is : "<< a * b <<endl;
    cout<<"The value of a / b is : "<< a / b <<endl;
    cout<<"The value of a % b is : "<< a % b <<endl;
    cout<<"The value of a++ is : "<< a++ <<endl;
    cout<<"The value of a-- b is : "<< a--<<endl;
    cout<<"The value of ++a is : "<< ++a <<endl;
    cout<<"The value of --a is : "<< --a <<endl;
    cout<<endl;

    // Assignment operator --> used to assign values to variables

    // comparision operator
    cout<<"The value of a == b is "<<(a == b) <<endl;
    cout<<"The value of a != b is "<<(a != b) <<endl;
    cout<<"The value of a > b is "<<(a > b) <<endl;
    cout<<"The value of a >= b is "<<(a >= b) <<endl;
    cout<<"The value of a < b is "<<(a < b) <<endl;
    cout<<"The value of a <= b is "<<(a <= b) <<endl;
    cout<<endl;

    // logical operator 
    cout<<"The value of (a == b) && (a < b) is " << ((a == b) && (a < b))<<endl;
    cout<<"The value of (a == b) || (a < b) is " << ((a == b) || (a < b))<<endl;
    cout<<"The value of (!(a == b)) is " << (!(a == b))<<endl;

    return 0;
}
