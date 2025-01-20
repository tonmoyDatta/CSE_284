//Return Value from Operator Function (++ Operator).

#include <iostream>
using namespace std;
class Count {
private:
int value;
public
:
// Constructor to initialize count to 5
Count(){
value= 2;
}
// Overload ++ when used as prefix
Count operator ++ () {
Count temp;
// Here, value is the value attribute of the calling object
temp.value = ++value;
return temp;
}
// Overload ++ when used as postfix
Count operator ++ (int) {
Count temp;
#include <iostream>
using namespace std;
class Count {
private:
int value;
public
:
// Constructor to initialize count to 5
Count(){
value= 2;
}
// Overload ++ when used as prefix
Count operator ++ () {
Count temp;
// Here, value is the value attribute of the calling object
temp.value = ++value;
return temp;
}
// Overload ++ when used as postfix
Count operator ++ (int) {
Count temp;
