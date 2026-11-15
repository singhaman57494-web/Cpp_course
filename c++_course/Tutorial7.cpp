//                       Reference variable & typecasting

# include <iostream>
using namespace std;
int c = 45;

int main ()
{
    // ----------------------built in data types-------------------

    int a , b , c;
    cout<<"enter the value of a : "<<endl;
    cin>>a;

    cout<<"enter the value of b : "<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is : " << c <<endl;
    cout<<"The global c is : " << ::c; // scope resolation operator

    //------------------------Literals Data types----------------------
    
    float d = 34.4f;
    long double e = 34.4l;

    cout<<"The sizeof 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The sizeof 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The sizeof 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"The sizeof 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The sizeof 34.4L is : "<<sizeof(34.4L)<<endl;

    cout<<"The value of d is :"<<d<<"\nthe value of e is :"<<e;

    // -----------------------------Reference Variables---------------------
    
    float x = 455;
    float & y = x;
    cout<<"the value of x is : "<<x <<endl;
    cout<<"the value of y is : "<<y <<endl;

    //-----------------------------Typecasting-----------------------------

    int m = 45;
    float n = 45.45;
    cout<<"the value of m is "<<(float)m <<endl;
    cout<<"the value of n is "<<(int)n <<endl;
    int o = int(n);

    cout<<"the expression is : "<<m + n <<endl;
    cout<<"the expression is : "<<m + (int)n<<endl;
    cout<<"the expression is : "<<m + int(n)<<endl; 
    return 0;
}