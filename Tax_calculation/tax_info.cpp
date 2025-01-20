#include<iostream>
using namespace std;

class Employee
    {
    private:
        double basic_pay;
        int year_experience;
        double medical_allowance;
        double house_allowance;
        double bonus_per_year;

    public:
        Employee(double basicPay,
        int yearExperience,
        double medicalAllowance,
        double houseAllowance,
        double bonusPerYear)
        {
            basic_pay = basicPay;
            year_experience = yearExperience;
            medical_allowance = medicalAllowance;
            house_allowance = houseAllowance;
            bonus_per_year = bonusPerYear;
        }

        double calculateGrossPay()
        {
            return 12 * (basic_pay + medical_allowance + house_allowance) + bonus_per_year*year_experience;

        }
        double calculateTax(double grossPay)
        {
            return (grossPay > 500000) ? 0.1 * grossPay : 0;

        }
        void displayOutput()
        {
            double grossPay = calculateGrossPay();
            double Tax = calculateTax(grossPay);

            cout << "Gross pay: " << grossPay << endl;
            cout << "Tax: " << Tax << endl;

        }
    };

int main()
    {
        double basicPay,medicalAllowance,houseAllowance,bonusPerYear;
        int yearExperience;

        cout << "Basic Pay: " << endl;
        cin >> basicPay;
        cout << "Year of Experience: " << endl;
        cin >> yearExperience;
        cout << "Medical Allowance Per Month: " << endl;
        cin >> medicalAllowance;
        cout << "House Allowance: " << endl;
        cin >> houseAllowance;
        cout << "Bonus per year: " <<endl;
        cin >> bonusPerYear;

        Employee employee1(basicPay, yearExperience, medicalAllowance, houseAllowance, bonusPerYear);
        employee1.displayOutput();

        return 0;


    }
