//                       variable scope & Data Types

// A variable is a container to hold data
// variable can be of various types. primary we have these variable types in c++:
/*
1. int
2. float
3. char
4. Double
5. boolean
*/
// int sum = 34; means sum is an integer variable which hods value in memory.

/* data_type variable_name = value;
. ex :- int a = 4, b = 6;
. based on scope, variable can be classified into two types:
1.local variables
2.global variables */

//           syntax

# include <iostream>
using namespace std;

int main ()
{
    int a = 4; // variable a
    cout << "A : " << a;
    return 0;
}

//                                  scope variable

/* scope of a variable is the region in code where the exittence of variable is valid.
. based on scope we have loacl and gloabal variable in c++.
1. LOCAL VARIABLE :- local variables are declared inside the braces of any function and can be accessed only from there.
2. GLOABL VARIABLE :- global varibales are declared outside any function and can be accessed from anywhere.
. can global and local variable have some bane in c++
*/

//                             user defined datatype
/*
1. struct
2. union
3. Enum
*/

//                            derived data types
/*
1. array
2. function
3. pointer
*/

#include <iostream>
using namespace std;

int glo = 6; // this is a global variable
void sum(){
    int glo = 74; // local variable 
    cout << "\nlocal variable : " << glo;
}

int main()
{
    int a = 4 , b = 5; // local variable 
    float PI = 3.14;
    bool A = true; // True = 1 , false = 0
    cout << "this is tutorial 4.\nhere the value of a is " << a << "\nThe value of b is " << b;
    cout << "\nThe value of PI is : " << PI;
    cout << "\nThe global variable is : "<< glo;
    cout << "\nboolen : " << A;
    sum();
    return 0;
}