//                             structures, union & Enums in c++

#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main() 
{
    ep Aman;
    struct employee shubham;
    struct employee rohan;
    
    Aman.eId = 1;
    Aman.favChar = 'c';
    Aman.salary = 12000000;

    cout<<"the value is "<<Aman.eId<<endl;
    cout<<"the value is "<<Aman.favChar<<endl;
    cout<<"the value is "<<Aman.salary<<endl;

    // union

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    // ENUM
    
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}

