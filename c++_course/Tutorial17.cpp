//                     inline functions, default arguments & constant arguments

#include <iostream>
using namespace std;

inline int product(int a , int b) // inline dunction 
{
    return a * b;
}

int Product(int a , int b)
{
    static int c=0; // this is executes only once time 
    c = c+ 1;  // next time this function is run , the value of c will be retained 
    return a * b + c;
}

//               default arguments

float moneyReceived(int currentMoney, float factor=1.1)
{
    return currentMoney * factor;
}

//             constant arguments

// int strlen(const char *p)
// {
    
// }

int main() 
{
    int a, b;
    int x = 4 , y = 5;
    // cout<<"enter the value of a and b : ";
    // cin>>a>>b;
    // cout<<"The sum of a and b is : "<<product(a ,b)<<endl;
    // cout<<"The sum of a and b is : "<<Product(x ,y)<<endl;
    int money = 100000;

    cout<<"if you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<" Rs after 1 year";
    
    
    return 0;
}