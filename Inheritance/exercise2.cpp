// Write a C++ program to calculate the percentage of a student. Accept the
// marks of five subjects (Physics, Chemistry, Math, Biology, and English) in base
// class. A class will derived from the base class which includes a function to find
// the total marks obtained and another class derived from this first derived class
// which calculates and displays the percentage of student.
// Hints: Use array for taking the marks of a student.

#include<iostream>
using namespace std;

    class base
    {
    public:
        int marks[5];
        void getmarks()
        {
            cout << "Enter the marks of five subjects (Physics,Chemistry,Math,Biology & English):\n";
            for(int i =0; i<5; i++)
            {
                cin >> marks[i];
            }
        }
    };

    class derive1 : public base
    {
    public:
        int sum=0;
        void total_marks()
        {
            getmarks();
            for (int i = 0; i < 5; i++)
            {
                sum += marks[i];
            }
            cout << "Total marks: " << sum << endl;
        }
    };

    class derive2:public derive1
        {
        public:
        int percnt;
        void percentage()
        {
           for (int i = 0; i < 5; i++)
           {
                percnt = sum/5;
            }
            cout << "Percentage of student marks: " << percnt << endl;
        }
    };

int main()
    {
        derive2 p;
        p.total_marks();
        p.percentage();
        return 0;
    }
