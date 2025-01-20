//A C++ program to demonstrate the friend function

#include <iostream>
using namespace std;
class Distance {
private:
int meter;
int value;
// friend function
friend int addvalue(Distance);
public:
// another way of declaring constructor
//Distance() : meter(0) {}
// default constructor
Distance(){
meter = 0;
}
};
// friend function definition
int addvalue(Distance d) {
cout<<"Enter the value you want to add: ";
//accessing private members from the friend function
cin>>d.value;
return d.meter+d.value;
}
int main() {
Distance D;
cout << "Distance: " << addvalue(D);
return 0;
}
