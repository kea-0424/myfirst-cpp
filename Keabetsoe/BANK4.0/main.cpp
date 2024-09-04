#include <iostream>

using namespace std;
int bank_balance;

void init_deposit() {
    cout << "You are required to deposit some start-up cash in your account before proceeding" << endl;
    cout << "How much would you like to deposit: M";
    cin >> bank_balance;
}

void show_menu() {
    cout << "------WELCOME TO LEVITICUS BANK------" << endl;
    cout << "****************MENU*****************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Pay bills" << endl;
    cout << "5. Exit" << endl;
}

void withdraw() {
    cout << "Available amounts:" << endl;
    cout << "a. M500" << endl;
    cout << "b. M1000" << endl;
    cout << "c. M2000" << endl;
    cout << "d. M5000" << endl;
    cout << "e. Custom Amount" << endl;

    char w_amounts;
    int withdraw_amount = 0;
    cout << "Please pick an amount you would like to withdraw: ";
    cin >> w_amounts;

    switch (w_amounts) {
        case 'a':
            withdraw_amount = 500;
            break;
        case 'b':
            withdraw_amount = 1000;
            break;
        case 'c':
            withdraw_amount = 2000;
            break;
        case 'd':
            withdraw_amount = 5000;
            break;
        case 'e':
            cout << "Enter the custom amount: M";
            cin >> withdraw_amount;
            break;
        default:
            cout << "Invalid option selected!" << endl;
            return;
    }

    int bank_charges = 30;
    if (withdraw_amount + bank_charges > bank_balance) {
        cout << "Insufficient funds! Withdrawal and charges exceed your balance." << endl;
    } else {
        bank_balance -= (withdraw_amount + bank_charges);
        cout << "You have successfully withdrawn M" << withdraw_amount << endl;
        cout << "Bank charges of M30 have been applied." << endl;
        cout << "Your updated balance is M" << bank_balance << endl;
    }
}
void bills_menu()
{
int choice;
string ans;
int electricity,water,rent,insurance;
rent = 1500;
electricity = 400;
water = 120;
insurance = 250;
cout << "1. Electricity" << endl;
cout << "2. Water" << endl;
cout << "3. Rent" << endl;
cout << "4. Insurance" << endl;
cout << "5. Exit" << endl;
cout << "Which bills would like to pay for today"<<endl;
cin >> choice;

if (ans == "Yes" || "yes" || "Y" || "y" ) {
int subtraction(int bank_balance, int bill_amount)
{
    return bank_balance - bill_amount;
}
}

}
if (ans == "Yes" || "yes" || "Y" || "y" ) {
int subtraction(int bank_balance, int bill_amount)
{
    return bank_balance - bill_amount;
}
}







int main() {
    int option;

    init_deposit();

    do {

        show_menu();
        cout<<endl;
        cout << "What would you like to do today? ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is M" << bank_balance << endl;
                break;
case 2: {
    int deposit_amount, updated_balance;
    int acc_no;
    string acc_name;

    cout << "Please enter the account number you are depositing to: ";
    cin >> acc_no;
    cout<<endl;
    cout << "Enter the name of the account holder: ";
    cin >> acc_name;
    cout<<endl;
    cout << "How much would you like to deposit? M";
    cin >> deposit_amount;
    cout<<endl;
    updated_balance = bank_balance - deposit_amount;
    bank_balance = updated_balance;
    cout << "You are depositing M" << deposit_amount << " to " << acc_name << endl;
    cout<<endl;
    cout << "Your updated balance is M" << updated_balance << endl;
    break;
}

                case 3:
                withdraw();
                break;

            case 4:
            cout<< endl;
                cout << "This feature is under development." << endl;
                break;

            case 5:
            cout <<endl;
                cout << "Thank you for using Leviticus Bank. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid option selected. Please try again." << endl;
                break;
        }
    } while (option != 5);

    return 0;
}
