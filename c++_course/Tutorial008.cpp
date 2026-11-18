//                      constants, manipulators & operator precedence

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // ------------------------------constant-----------------------------------------------------------

    const int a = 34; // constant 
    char c = 'C';
    cout<<"The value of a was : "<< a <<endl;
    cout<<"The value of c was : "<< c <<endl;
    /* error : assignment of read only variable 'a' beacuse a is constant
    a = 45;
    cout<<"The value of a is : "<< a <<endl;*/
    c = '4';
    cout<<"The value of c is : "<< c <<endl;

    //---------------------------------manipulators-------------------------------------------------------------
    
    int m = 3, n = 78, o = 1234;
    //         without setw
    cout<<"The vlue of a is : "<<m <<endl;
    cout<<"The vlue of b is : "<<n <<endl;
    cout<<"The vlue of c is : "<<o <<endl;

    //          with setw
    cout<<"The vlue of a is : "<<setw(4)<<m <<endl;
    cout<<"The vlue of b is : "<<setw(4)<<m <<endl;
    cout<<"The vlue of c is : "<<setw(4)<<o <<endl;

    //-----------------------------operator-precedence------------------------------------------

    int x = 3, y = 4;
    int z = ((((x*5)+y)-45)+87);
    cout<<z;
    return 0;
}