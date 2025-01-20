Define a class Distance with distances in feet and inch and with a print
function to print the distance.
b) overload + operator to add two Distances using friend function.


#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Distance
    {
    private:
        float feet;
        float inch;
    public:
        Distance()
        {
            feet=0;
            inch=0;
        }
    void get()
    {
        cout<<"Enter Distance in feet:";
        cin>>feet;
        cout<<"Enter Distance in inch:";
        cin>>inch;
    }
    void print()
    {
        cout<<"Distance is:\n"<<feet<<" feet "<<inch<<" inch"<<endl;
    }
    friend Distance operator + (Distance,Distance);
};
    Distance operator + (Distance d1,Distance d2)
    {
        Distance temp;
        temp.feet=d1.feet+d2.feet;
        temp.inch=d1.inch+d2.inch;
        return temp;
}
int main()
{
    Distance home1,home2,sum;
    cout<<"First Distance:"<<endl;
    home1.get();
    cout<<"Second Distance:"<<endl;
    home2.get();
    sum = home1+home2;
    cout<<"Summation of this two distance is:"<<endl;
    sum.print();
    return 0;
}
