//                            for while and do while loop in c++

#include <iostream>
using namespace std;

int main()
{
    //   loops in c++
    /*
    .There are three types of loops in c++
    1. for loop
    2. while loop
    3. do-while loop
    */

    //----------------------for loop in c++------------------------

    /* *syntax for for loop

    for(initialization; condition; updation)
    {
        loop body(c++ code)
    } */

    cout<<"this is for loop numbers"<<endl;
    for (int i = 1; i < 5; i++)
    {
        cout << i << endl;
    }
    

    // ---------------------while loop in c++-----------------------
    /**syntax of while loop

    while(condition)
    {
        c++ statements;
    } */

    // printing 1 to 40 using while loop

    cout<<"this is while loop numbers"<<endl;

    int i = 5;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }

    //----------------------------------DO while loop in c++--------------------------------------

    /*do while loop in c++
    syntax
    do{

        c++ statements;
    }while (condition)*/

    cout<<"this is  do while loop numbers"<<endl;
    int a = 10;
    do{
        cout<<a<<endl;
        a++;
    }while(a <= 15);

    return 0;
}