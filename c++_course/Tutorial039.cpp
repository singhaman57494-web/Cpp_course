//                               protected Access modifier in c++

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*for a protected member:
|                public by derivation   private derivation     protected derivation
1. private       not inherited          not inherited          not inherited
2. protected     protected              private                protected
3. public        public                 private                protected*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a;  will not work since a is protected in both base as well as derived class.

    return 0;
}