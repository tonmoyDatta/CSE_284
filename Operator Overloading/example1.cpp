// A C++ program to find the sum of two complex numbers using
// binary operator overloading.

#include <iostream>
using namespace std;
class Complex {
private:
float real;
float imag;
public:
// Constructor to initialize real and imag to 0
Complex() {
real = 0;
imag = 0;
}
void input() {
cout << "Enter real and imaginary parts respectively: ";
cin >> real;
cin >> imag;
}
// Overload the + operator
Complex operator + (Complex c) {
Complex temp;
temp.real = real + c.real;
temp.imag = imag + c.imag;
return temp;
}
void output() {
if (imag < 0)
cout << "Output Complex number: " << real << imag << "i";
else
cout << "Output Complex number: " << real << "+" << imag <<
"i";
}
};
int main() {
Complex c1, c2, result;
cout << "Enter first complex number:\n";
c1.input();
cout << "Enter second complex number:\n";
c2.input();
// c1 calls the operator function
// c2 is passed as an argument to the function
result = c1 + c2; // c1.add(c2)
result.output();
return 0;
}
