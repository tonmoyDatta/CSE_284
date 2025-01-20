#include<iostream>
using namespace std;

class Employee
    {
    protected:
        double b_pay, y_exp, m_a, h_a, bonus;
    public:
    Employee()
    {
        b_pay = y_exp = m_a = h_a = bonus =0;

    }
    void getdata()
    {
        cout<<"Basic pay "; cin >> b_pay;
        cout<<"Year of exp: "; cin >> y_exp;
        cout<< "Medical alowance: "; cin >> m_a;
        cout << "House allowance: "; cin >> h_a;
        cout << "Bonus per year :" ; cin >> bonus;

    }
    };

    class tax_calc : public Employee
    {
    public:
        void calculate_tax()
        {
            int gross_pay;
           gross_pay = 12*(b_pay+m_a+h_a)+ bonus*y_exp;
            int tax;
            if (gross_pay>500000)
            {
                tax = gross_pay*0.1;

            }
            else{tax =0;}
            cout<<"gross pay: "<< gross_pay<< endl;
            cout <<" tax: " << tax <<endl;

        }

    };

    int main()
    {
        tax_calc e1;
        e1.getdata();
        e1.calculate_tax();

        return 0;
    }
