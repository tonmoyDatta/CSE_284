//Write a C++ program to understand the Destructor Class in C++.
#include <iostream>
#include <cstring>
using namespace std;
class Cube
{
int side;
public:
~Cube()
{
cout<<"Destructor Called";
}
};
int main()
{
Cube c;
}
