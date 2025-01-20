//Write C++ program to demonstrate the use of Parameterized Con￾structor.

// C++ program to calculate the area of a rectangle
#include <iostream>
using namespace std;
// declare a class
class Rectangle {
private:
double length;
double height;
public:
// parameterized constructor to initialize variables
Rectangle(double len, double hgt) {
length = len;
height = hgt;
}
double calculateArea() {
return length * height;
}
};
int main() {
// create object and initialize data members
Rectangle rect1(10.5, 8.6);
Rectangle rect2(8.5, 6.3);
cout << "Area of Rectangle 1: " << rect1.calculateArea() << endl;
cout << "Area of Rectangle 2: " << rect2.calculateArea();
return 0;
}
