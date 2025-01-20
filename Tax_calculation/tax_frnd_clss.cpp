#include<iostream>
using namespace std;

class Employee
    {
    private:
        double b_pay, y_exp, medi_allw, house_allw, bonus;

    public:
        Employee(){
        b_pay= y_exp= medi_allw= house_allw= bonus = 0;
        }

        void getdata()
        {
            cout<<"Basic pay: "; cin >> b_pay;
            cout<<"Year of experience: "; cin >> y_exp;
            cout<<"Medical Allowance: "; cin >> medi_allw;
            cout<<"House Allowance: "; cin >> house_allw;
            cout<<"Bonus per year: "; cin >> bonus;
        }

        friend class tax_calc;
    };

class tax_calc
    {
    public:
        void calculate_tax(Employee e)
        {
            int gross_pay;
            gross_pay =12*(e.b_pay+ e.house_allw+ e.medi_allw) + e.bonus*e.y_exp;

            int tax;
            if (gross_pay > 500000)
            {
                tax = gross_pay*0.1;
            }
            else{
                tax = 0;
            }
        cout << "Gross pay: " << gross_pay << endl;
        cout << "Tax: " << tax;


        }

    };


    int main()
    {
        Employee e1;
        e1.getdata();

        tax_calc calc;
        calc.calculate_tax(e1);
    }
