//                            basic input output in c++

/*
. c++comes with libraries which helps us in performing input/output. in c++ sequence 
of bytes corresponding to input and output are commonly known as streams.
1. INPUT STREAM :  direction of flow of bytes takes place from input divice(for ex keyboard)
to the main memory.
2. OUTPUT STREAM : direction of flow of bytes takes place from main memory to the output 
device (for ex Display).
*/

#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    cout <<"enter the num 1 is: "; // insertion operator << (print)
    cin >>num1; // extraction operator >> (input value)

    cout << "enter the value of num 2 is ";
    cin >> num2;

    cout <<"sum is num1 and num2 : " << num1 + num2;
    return 0;
}