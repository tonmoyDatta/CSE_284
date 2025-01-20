// Write a C++ Program to define a class batsman with the following specifications:
// Private members:
// batsman code: 4 digits code number
// batsman name: 20 characters(string)
// total innings, notout innings, toal runs: integer type
// calcavg(): Function to compute batavg
// batting avg: [total runs/(total innings-notout innings)] (formula to calculate batting average)
// Public members:
// readdata(): Function to accept value from batsman code, batsman name, total innings, notout innings, total runs and invoke the function calcavg().
// displaydata(): Function to display the data members on the screen.
// Access all the data members and member functions to calculate batting average of a batsman by creating its object.


#include<iostream>
using namespace std;
class batsman
{
private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
public :
    void readdata ()
    {
        cout<<"Enter batsman code: "<<endl;
        cin>> bcode;
        cout<<"Enter batsman name: "<<endl;
        cin>>bname;
        cout<<"enter innings,notout and runs: "<<endl;
        cin>>innings>>notout>>runs;
        calcavg();
    }
    void displaydata()
    {
        cout<<"Batsman code: "<<bcode<<"\nBatsman name: "<<bname<<"\nInnings: "<<innings
            <<"\nNot out: "<<notout<<"\nRuns: "<<runs<<"\nBatting Average: "<<batavg;
    }
    };
    int main()
    {
        batsman Bangladesh;
        Bangladesh.readdata();
        Bangladesh.displaydata();
        return 0;
    }
