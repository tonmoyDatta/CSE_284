#include<iostream>
using namespace std;

class student
    {
    private:
        int a;
        int b;
        static int c;

    public:

    void getdata(int A , int B){
        a = A;
        b = B;
         cout << "A : "<< a <<endl;
         cout << "B : " << b <<endl;
    }

    student(){
        c++;
    }

    static int getcount(){
        return c;
    }
};

    int student::c = 10;
    int main()
    {
        student s1;
        s1.getdata(1,2);
        cout << "c :" << student::getcount() << endl;
        student s2;
        s2.getdata(1,3);
        cout << "c :" << student::getcount() << endl;
        student s3;
        s3.getdata(1,4);
        cout << "c :" << student::getcount() << endl;

    }
