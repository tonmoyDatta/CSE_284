// Write a C++ program to find the number and sum of all integer between 100
// and 200 which are divisible by 11 with friend function.

#include<iostream>
using namespace std;
class class1
{
	private:
		int ni,nl,sum,i;
	public:
	    class1()
		{
			cout<<"Enter the range:\n ";
			cin>>ni;
			cout<<"to:\n";
			cin>>nl;
		}
		friend void sum1(class1);
};
void sum1(class1 r)
{
    cout<<"number divisible by 11 between "<<r.ni<<" to "<<r.nl<<" is:\n";
			for(r.i=r.ni;r.nl>r.i;r.i++)
			{
			    if(r.i%11==0)
                {
				cout<<r.i<<endl;
				r.sum=r.sum+r.i;
                }
			}
  cout<<"the sum of all numbers divisible by 11 between "<<r.ni<<" to "<<r.nl<<" = "<<r.sum;

}
int main()
{
    class1 r;
    sum1(r);
}



