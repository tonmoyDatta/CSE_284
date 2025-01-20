// Write a class having two private variables and one member function which
//will return the area and perimeter of the rectangle.


#include <iostream>
using namespace std;
class rectangle {
    private:
        double length, width;
    public:
        void initData(double len, double wid)
        {
            length = len;
            width = wid;
        }
        double calculatedata(int condition)
        {
            if (condition == 1)
            return length * width;

            else
            return 2*(length+width);

        }
        };
    int main()
    {
        rectangle rect1;
            rect1.initData(4,5);
            cout << "Area of the rectangle = " << rect1.calculatedata(1) <<endl;
            cout<<"Perimeter of the rectangle = " << rect1.calculatedata(2) << endl;
        return 0;
    }
