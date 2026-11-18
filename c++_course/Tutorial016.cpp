//                            call by value and call by reference

#include <iostream>
using namespace std;

int sum(int a , int b)
{
    int c = a + b;
}

int swap(int x , int y)
{
    // this will not swap a and b
    int temp = x;
    x = y;
    y = temp;
}

//                             call by Reference using pointers

void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

//                             call by reference using c++ reference variables

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int a = 4, b = 5;

    cout<<"the sum is 4 and 5 is : "<<sum(4, 5)<<endl;
    cout<<"the values of a is : "<<a<<" the value of b is : "<<b <<endl;
    swap(a, b);// this will not swap a and b
    swapPointer(&a , &b); // this will swap a and b successfully!
    cout<<"the values of a is : "<<a<<" the value of b is : "<<b <<endl;
    swapReferenceVar(a, b); // this will swap a and b using Reference variables
    cout<<"the values of x is : "<<a<<" the value of y is : "<<b <<endl;

    return 0;
}