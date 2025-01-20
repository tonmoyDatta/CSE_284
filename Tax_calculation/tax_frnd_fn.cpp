#include<iostream>
using namespace std;

class Employee
    {
    private:
        double b_pay, yr_exp, medi_allw, house_allw, bonus;
    public:
        Employee()
        {
            b_pay = yr_exp = medi_allw = house_allw = bonus = 0;
        }

        void getdata()
        {
        cout<<"Basic pay: " ;
        cin >> b_pay ;
        cout << "Year of experience: ";
        cin >> yr_exp;
        cout<< "Medical allowance: " ;
        cin >> medi_allw;
        cout << "House allowance: ";
        cin >> house_allw;
        cout << "Bonus per year: ";
        cin >> bonus;
        }

        friend void tax_calc(Employee e);
    };

    void tax_calc(Employee e)
    {
        int gross_pay;
        gross_pay = 12*(e.b_pay + e.medi_allw + e.house_allw) + e.bonus*e.yr_exp;

        int tax;
        if (gross_pay > 500000)
            {
                tax = gross_pay*0.1;
            }
        else {
            tax = 0;
        }

        cout << " Gross pay: " << gross_pay << endl;
        cout << "Tax amount: " << tax <<endl;
    }

    int main()
    {
        Employee e1;

        e1.getdata();
        tax_calc(e1);

        return 0;
    }
