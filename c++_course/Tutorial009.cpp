//                               control structure & if else & switch-case statement

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "tell me your age :" << endl;
    cin >> age;

    //-----------------------selection control structure : if else--------------------------------------

    if ((age < 18) & (age > 0))
    {
        cout << "you cannot come to my party!" << endl;
    }
    else if (age == 18)
    {
        cout << "you will get a kid pass to the party!" << endl;
    }
    else if (age < 0)
    {
        cout<<"you are not yet born!"<<endl;
    }
    else
    {
        cout << "you can come to the party!" << endl;
    }

    //------------------------selection control structure: switch case statements-----------------------

    switch (age)
    {
    case 18:
        cout<<"you are 18 years";
        break;
    case 22:
        cout<<"you are 22 years"<<endl;
        break;
    case 2:
        cout<<"you are 2 years"<<endl;
        break;

    default:
        cout<<"no spacial cases"<<endl;
        break;
    }

    return 0;
}
