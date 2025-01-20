//A C++ program to demonstrate the single level inheritance.

#include <iostream>
using namespace std;
// Base class
class Shape {
protected:
int width;
int height;
public:
void setWidth(int w) {
width = w;
}
void setHeight(int h) {
height = h;
}
};
// Derived class
class Rectangle: public Shape {
public:
int getArea() {
return (width * height);
}
};
int main(void) {
Rectangle rect;
rect.setWidth(10);
rect.setHeight(12);
// Print the area of the object.
cout << "Total area: " << rect.getArea() << endl;
return 0;
}
