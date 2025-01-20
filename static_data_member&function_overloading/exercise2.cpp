// Write a C++ Program to calculate the area of different geometric shapes
// such as Circle, Triangle, and Rectangle. Use function overloading.

#include<iostream>
using namespace std;

class Shape{
private:
    int length,radius,height;
    float width;
public:
    void readData(int r, int l, int h, float w)
    {
        radius = r;
        length = l;
        height = h;
        width = w;
        calculate(radius);
        calculate(length, height);
        calculate(length, width);
    }
    void calculate(int radius){
        double area = 3.1416*radius*radius;
        cout << "Area of Circle: " << area << endl;
    }
    void calculate(int length, int height){
        double area = 0.5*length*height;
        cout << "Area of Triangle: " << area << endl;
    }
    void calculate(int length, float width){
        double area = length*width;
        cout << "Area of Rectangle: " << area << endl;;
    }
};

int main(){
    int l,h,r;
    float w;
    Shape shape1;
    cout<<"Enter the radius of Circle:";
    cin>>r;
    cout<<"Enter the length of Rectangle and Triangle:";
    cin>>l;
    cout<<"Enter the width of Rectangle:";
    cin>>w;
    cout<<"Enter the  height of Triangle:";
    cin>>h;
    shape1.readData(r,l,h,w);

    return 0;
}
