//                               object memory Allocations & using array in classes

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) {counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter Id of your item No : " << counter + 1<< endl;
    cin >> itemId[counter];

    cout << "Enter PRICE of your item : ";
    cin >> itemPrice[counter];
    counter ++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id : " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}