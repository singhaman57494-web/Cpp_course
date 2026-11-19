//                rwecursions & recursive functions in c++

#include <iostream>
using namespace std;

int factorial(int n)
{
    if ((n == 1) || (n == 0))
        return 1;

    return n * factorial(n - 1);
}

//                   fibonacci series

int fib(int a)
{
    if (a < 2)
    {
        return 1;
    }
    return fib(a - 2) + fib(a - 1);
}


int main() 
{
    // factorial of a number

    int n;
    cout<<"enter n number : "<<endl;
    cin>>n;
    cout<<"the factorial of n is : "<<factorial(n);

    // fibonacii series

    int a;
    cout<<"enter n number : ";
    cin>>a;
    cout<<"the term in fibonacci sequence at position of "<<a <<" is "<<fib(a);

    return 0;
}