// Write a C++ Program to define a class Car with the following specifica￾tions:
// Private members:
// car name, model name, fuel type: string type
// mileage: float type
// price: double type
// Public members:
// displaydata(): Function to display the data members on the screen.
// Use Constructor (both Default and parameterized) and destructor. When no
// parameter is passed the default constructor will be called with the message ”De￾fault constructor has been called”.



#include<iostream>
using namespace std;
class car
{
private:
    char car_name[100], model_name[100], fuel_type[100];
    float mileage;
    double price;
public:
    displaydata()
    {
        cout<<"Enter the details of your car(name, model, fuel,milage & price):"<<endl;
        cin>> car_name>>model_name>> fuel_type>>mileage>>price;
        cout<<" The details are here:"<<endl;
        cout<<"Car name:"<<car_name<<endl<<"Model name:"<<model_name<<endl<<"Fuel type:"<<fuel_type
            <<endl<<"Mileage:"<<mileage<<endl<<"Price:"<<price<<endl;
    }
    car()
    {
        cout<<"Default constructor has been called."<<endl;
    }
    car(int a)
    {
        displaydata();
    }
    ~car()
    {
    cout<<"Destructor Called";
    }
};
int main()
{
    int a;
    car car1,car2(a);
    return 0;
}
