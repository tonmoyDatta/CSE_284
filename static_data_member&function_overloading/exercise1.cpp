// Write a C++ program to define a class Batsman with the following specifi￾cations,
// batsman ID: 6 digits roll number
// static member count: To keep track on number of object
// static function getcount(): return the value of count
// function getname(): To take batsman name as input
// function showname(): To show batsman name
// Access all the data members and member functions using the objects of class
// Batsman.
// Sample Input/Output
// Initially number of objects: 0
// Enter number of entry: 2
// Enter Batsman Name: Shakib
// Enter Batsman Name: Liton
// Finally number of objects: 2
// Batsman Name: Shakib
// Batsman Name: Liton

#include<bits/stdc++.h>
using namespace std;
class Batsman
{
private:
    int batsman_ID;
    string batsman_name;
    static int count;
public:
    Batsman()
    {
        count++;
        batsman_ID = 1804000 + count;
    }
    void getname()
    {
        cout<<"Enter Batsman name: ";
        cin>>batsman_name;
    }
    void showname()
    {
       // cout<<"Batsman Name: "<<batsman_name<<endl;
        cout << "Batsman ID: " << batsman_ID << endl;
    }
    static int getcount()
    {

    return count;
    }

};
int Batsman::count;
int main()
{
    int n;
    cout<<"Initially number of object:"<<Batsman::getcount()<<endl;
    cout<<"Enter number of entry:";
    cin>>n;
    Batsman b1;
    Batsman b2;
    b1.getname();
    b2.getname();
    cout<<"Finally number of object: "<<Batsman::getcount()<<endl;
    b1.showname();
    b2.showname();
}
