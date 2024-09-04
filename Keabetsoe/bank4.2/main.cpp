#include <iostream>
#include <string>

using namespace std;

int bank_balance;

// Function to initialize deposit
void init_deposit() {
    cout << "You are required to deposit some start-up cash in your account before proceeding" << endl;
    cout << "How much would you like to deposit: M";
    cin >> bank_balance;
}

// Function to show the main menu
void show_menu() {
    cout << "------WELCOME TO LEVITICUS BANK------" << endl;
    cout << "****************MENU*****************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Pay bills" << endl;
    cout << "5. Exit" << endl;
}

// Function to perform withdrawal
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


int subtraction(int bank_balance, int bill_amount) {

    return bank_balance - bill_amount;
}

void bills_menu() {
    int choice;
    string ans;
    int electricity = 400, water = 120, rent = 1500, insurance = 250;

    cout << "1. Electricity" << endl;
    cout << "2. Water" << endl;
    cout << "3. Rent" << endl;
    cout << "4. Insurance" << endl;
    cout << "5. Exit" << endl;
    cout << "Which bill would you like to pay for today?" << endl;
    cin >> choice;

    cout << "Are you sure you want to pay this bill? (Yes/No): ";
    cin >> ans;

    if (ans == "Yes" || ans == "yes" || ans == "Y" || ans == "y") {
        switch (choice) {
            case 1:
                bank_balance = subtraction(bank_balance, electricity);
                cout << "Electricity bill paid. Your updated balance is M" << bank_balance << endl;

                break;
            case 2:
                bank_balance = subtraction(bank_balance, water);
                cout << "Water bill paid. Your updated balance is M" << bank_balance << endl;
                break;
            case 3:
                bank_balance = subtraction(bank_balance, rent);
                cout << "Rent paid. Your updated balance is M" << bank_balance << endl;
                break;
            case 4:
                bank_balance = subtraction(bank_balance, insurance);
                cout << "Insurance paid. Your updated balance is M" << bank_balance << endl;
                break;
            case 5:
                cout << "Exiting bill payment." << endl;
                break;
            default:
                cout << "Invalid option selected." << endl;
        }
    } else {
        cout << "Bill payment canceled." << endl;
    }
}

int main() {
    int option;
    int a = 0;
    init_deposit();

    do {
        show_menu();
        cout << endl;
        cout << "What would you like to do today? ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is M" << bank_balance << endl;
                break;
            case 2: {
                int deposit_amount,updated_balance;
                int acc_no;
                string acc_name;

                cout << "Please enter the account number you are depositing to: ";
                cin >> acc_no;
                cout << endl;
                cin.ignore();
                cout << "Enter the name of the account holder: ";
                getline(cin, acc_name);
                cout << endl;
                cout << "How much would you like to deposit? M";
                cin >> deposit_amount;
                cout << endl;

                updated_balance = bank_balance - deposit_amount;

                cout << "You are depositing M" << deposit_amount << " to " << acc_name << endl;
                cout << endl;
                cout << "Your updated balance is M" << updated_balance << endl;
                break;
            }
            case 3:
                withdraw();
                break;
            case 4:
                bills_menu();
                break;
            case 5:
                cout << "Thank you for using Leviticus Bank. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option selected. Please try again." << endl;
                break;

        }
        a++;
    } while (a < 5);

    return 0;
}
