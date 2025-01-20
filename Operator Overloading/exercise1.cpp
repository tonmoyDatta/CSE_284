// Define a class Distance with distances in feet and inch and with a print
// function to print the distance.
// a) overload < operator to compare two distances using member function.


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
    bool operator < (Distance c)
    {
        float First_distance=feet*12+inch;
        float Second_distance=c.feet*12+c.inch;
        return First_distance<Second_distance;
    }
};
int main()
{
    Distance home1,home2;
    cout<<"First Distance:"<<endl;
    home1.get();
    cout<<"Second Distance:"<<endl;
    home2.get();
    if(home1<home2)
    {
         cout<<"Second Distance is greater."<<endl;
        home2.print();
    }

    else
    {
        cout<<"Firt Distance is greater."<<endl;
        home1.print();
    }
    return 0;
}
