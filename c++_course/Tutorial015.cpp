//                   functions & function prototypes

#include <iostream>
using namespace std;

// function prototype

int sum(int a, int b);

int main() 
{
    int num1, num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    // num1 and num2 are actual parameters

    cout<<"The sum is : " <<sum(num1, num2)<<endl;
    return 0;
}

// function

int sum(int a, int b )
{
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
}
