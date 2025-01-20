//A C++ program to demonstrate the use of static data member

#include <iostream>
using namespace std;
class Square {
private:
int side; // normal data member
public:
static int objectCount;// static data member
// Constructor definition
Square()
{
// Increase every time object is created
objectCount++;
}
};
// Initialize static member of class Square using scope resolution
operator
int Square::objectCount = 0;
int main() {
Square s1;
// Object Count.
cout << "Total objects: " << Square::objectCount << endl;
Square s2;
// Object Count.
cout << "Total objects: " << Square::objectCount << endl;
return 0;
}
