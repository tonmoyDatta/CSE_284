//Write a C++ program to add two numbers. Accept these two numbers from
//the user in base class and display the sum of these two numbers in derived class.

#include <iostream>
using namespace std;
    class base
    {
    public:
        int x,y;
        void getdata()
        {
            cout << "Enter value of x & y:\n";
            cin >>x >>y;
        }
    };
    class derive1 : public base
    {
    public:
        void add()
        {
            getdata();
            cout << "\nThe sum is= " << x+y;
        }
    };
int main()
    {
        derive1 a;
        a.add();
        return 0;
    }
