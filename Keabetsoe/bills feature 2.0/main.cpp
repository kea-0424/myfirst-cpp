#include <iostream>

using namespace std;

int subtraction(int bank_balance, int bill_amount)
{
    return bank_balance - bill_amount;
}

int main()
{
    int bank_balance = 5000;

    int electricity_bill = 400;
    int water_bill = 120;
    int rent_bill = 1500;
    int insurance_bill = 200;

    cout << "Balance after paying electricity bill: " << subtraction(bank_balance, electricity_bill) << endl;
    cout << "Balance after paying water bill: " << subtraction(bank_balance, water_bill) << endl;
    cout << "Balance after paying rent: " << subtraction(bank_balance, rent_bill) << endl;
    cout << "Balance after paying insurance: " << subtraction(bank_balance, insurance_bill) << endl;

    return 0;
}
