//Write a C++ program to demonstrate the use of Copy Constructor
#include <iostream>
using namespace std;
// declare a class
class Rectangle {
private:
double length;
double height;
public:
// initialize variables with parameterized constructor
Rectangle(double len, double hgt) {
length = len;
height = hgt;
}
// copy constructor with a Wall object as a parameter
// copies data of the obj parameter
Rectangle(Rectangle &obj) {
length = obj.length;
height = obj.height;
}
double calculateArea() {
return length * height;
}
};
int main() {
// create an object of the Rectangle class
Rectangle rect1(10.5, 8.6);
// copy contents of rect1 to rect2
Wall rect2 = rect1;
// print areas of rect1 and rect2
cout << "Area of Rectangle 1: " << rect1.calculateArea() << endl;
cout << "Area of Rectangle 2: " << rect2.calculateArea();
return 0;
}