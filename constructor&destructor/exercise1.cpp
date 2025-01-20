// Suppose you have a Savings Account with an initial amount of 500 and you
// have to add some more amount to it. Create a class ’AddMoney’ with a data
// member named ’amount’ with an initial value of 500. Now make two constructors
// of this class as follows:
// • without any parameter - no amount will be added to the Savings Account.
// • having a parameter which is the amount that will be added to the Savings
// Account.
// Create an object of the ’AddMoney’ class and display the final amount in the
// Savings Account.


#include<iostream>
using namespace std;
class addmoney
{
    public:
        int amount;
        addmoney()
            {
                amount=500;
            }
            addmoney(int a)
            {
                cout<<"The initial amount is:500"<<endl;
                amount=500+a;
            }
        };
    int main()
    {
        int a;
        cout<<"Enter the amount you want to add:"<<endl;
        cin>>a;
        if(a==0)
        {
            addmoney a1;
            cout<<"No amount has been added and your balance is:"<<a1.amount<<endl;
            cout<<"Enter the amount want to add:"<<endl;
            cin>>a;
            addmoney a2(a);
            cout<<"The added amount is:"<<a<<endl<<"The final balance is:"<<a2.amount;
        }
        else
        {
            addmoney a2(a);
            cout<<"The added amount is:"<<a<<endl<<"The final balance is:"<<a2.amount;
        }
    }
