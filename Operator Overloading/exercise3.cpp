// Write a C++ program to Overloaded − operator to subtract two complex number.

#include<iostream>
using namespace std;

class complex
{
    private:
        float real;
        float imag;


    public:
        complex()
        {
            real = 0;
            imag = 0;
        }

        void input()
        {
            cout << "Enter real and imaginary parts respectively: ";
            cin >> real;
            cin >> imag;
        }

        complex operator - (complex c)
        {
            complex temp;
            temp.real = real - c.real;
            temp.imag = imag - c.imag;
            return temp;
        }

        void output ()
        {
            if (imag < 0 )
            cout << "The output complex number :"<< real << imag << "i";

            else
            cout << "The output complex number :" << real << "+" << imag << "i";

        }
    };


    int main() {
    complex c1, c2, result;

    cout << "Enter first complex number: \n";
    c1.input();

    cout <<"Enter second complex number: \n";
    c2.input();

    result = c1 - c2;

    result.output();


    return 0;
    }
