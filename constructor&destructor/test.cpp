#include<iostream>
using namespace std;

class Multiple
{
    private:
    double a,b,c;

    public:
    Multiple()
    {
        a = 5;
        b = 4;
        c = 3;
        cout<< "Creating default multiple value:"<<endl;
        cout<< a <<";"<< b <<";" << c <<endl;
    }
    Multiple(double n1, double n2,double n3)
    {
            a = n1;
            b = n2;
            c = n3;
        cout<< "Creating parameterize multiple value:"<<endl;
        cout<< a  <<";"<< b <<";" << c <<endl;
    }
    
};


int main()
{
    Multiple ml1;
    Multiple ml2(10 , 3 , 4);
    return 0;
}