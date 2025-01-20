//Write a C++ Program to display the reverse of a number using the Friend
//function.


#include<iostream>
using namespace std;
class class1
{
	private:
		int n,i;
	public:
		class1()
		{
			cout<<"Enter Number to Display reverse: ";
			cin>>n;
		}
		friend void reverse1(class1);
};
void reverse1(class1 r)
{
	 cout<<"The reverse of the Entered number: ";
			for(r.i=r.n;r.i>0;r.i=r.i/10)
			{
				cout<<r.i%10;
			}
}
int main()
{
    class1 r;
    reverse1(r);
}
