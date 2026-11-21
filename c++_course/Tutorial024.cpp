//                      static data members & methods in c++

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the Id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id of this Employee is : " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

//       count is the static data member of class Employee

int Employee::count; // default value is 0

int main()
{
    Employee harry, rohan, lavish;
    // harry. id = 1;
    // harry.count = 1 // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount();

    return 0;
}