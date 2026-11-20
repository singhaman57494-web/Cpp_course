//                      oops Recap & nesting of memeber functions

// OOPs - classes and objects

// C++ --> initally called --> c with classes by stroustroup.
// class --> extension of structures in c.
// structure had limitations:
//               - members are public.
//               - no methods.
// classes --> structure + more.
// classes --> can have methods and properties.
// classes --> can make few members as private and public.
// structure in c++ are typedef.
// you can diclare objects along with the class diclaraction.like this:
/* class employee{
       // class definition
   }harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary Format" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "displaying your binary number " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    //     Nesting of member functions

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}