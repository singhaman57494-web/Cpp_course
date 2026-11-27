//                           Inheritance IN c++

#include <iostream>
using namespace std;

//          Base class

class Employee
{
public:
    int id;
    float salary;
    Employee(int a)
    {
        id = 1;
        salary = 34;
    }
    Employee() {};
};

//      Derived class
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    member/methods/etc..
}

Note :
1. default visibility mode is private.
2. public visibility mode : public members of the base class becomes public members of the derived class.
3. private visibility mode : public members of the base class becomes private members of the derived class.
4. private member are never inherited.
*/

// creating a programmer class derived form Employee base class

class programmer : Employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(1);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer SkillF(10);
    cout << SkillF.languageCode <<endl;
    SkillF.getData();

    return 0;
}