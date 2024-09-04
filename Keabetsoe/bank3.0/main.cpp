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

    int bank_charges = 20;
    if (withdraw_amount + bank_charges > bank_balance) {
        cout << "Insufficient funds! Withdrawal and charges exceed your balance." << endl;
    } else {
        bank_balance -= (withdraw_amount + bank_charges);
        cout << "You have successfully withdrawn M" << withdraw_amount << endl;
        cout << "Bank charges of M20 have been applied." << endl;
        cout << "Your updated balance is M" << bank_balance << endl;
    }
}

int main() {
    int option;

    init_deposit();

    do {

        show_menu();
        cout << "What would you like to do today? ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is M" << bank_balance << endl;
                break;

            case 2: {
                int deposit_amount;
                int acc_no;
                string acc_name;

                cout << "Please enter the account number you are depositing to: ";
                cin >> acc_no;
                cout << "Enter the name of the account holder: ";
                cin >> acc_name;
                cout << "How much would you like to deposit? M";
                cin >> deposit_amount;
                bank_balance += deposit_amount;
                cout << "You are depositing M" << deposit_amount << " to " << acc_name << endl;
                cout << "Your updated balance is M" << bank_balance << endl;
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
