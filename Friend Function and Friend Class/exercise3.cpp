//Write a program in C++ to Check Whether a Number can be expressed as
//Sum of Two Prime Numbers using the friend function

#include <bits/stdc++.h>
using namespace std;

class Number {
private:
    int num;

public:
    Number() {
        cout << "Enter a number: ";
        cin >> num;
    }

    friend void checkPrimeSum(Number);
};

bool isPrime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; i++)
        {
        if (a % i == 0) return false;
        }
    return true;
}

void checkPrimeSum(Number obj) {
    bool found = false;

    for (int i = 2; i <= obj.num / 2; i++) {
        int complement = obj.num - i;
        if (isPrime(i) && isPrime(complement)) {
            cout << obj.num << " = " << i << " + " << complement << endl;
            found = true;
        }
    }

    if (!found) {
        cout << obj.num << " cannot be expressed as the sum of two prime numbers." << endl;
    }
}

int main() {
    Number n1;
    checkPrimeSum(n1);

    Number n2;
    checkPrimeSum(n2);

    return 0;
}
