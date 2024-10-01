#include <iostream>
#include <string>
using namespace std;

int bank_balance;
string account_number;
string account_holder_name;

// Array to define bill names and amounts
string bills[] = {"Electricity", "Water", "Rent", "Insurance"};
int bill_amounts[] = {400, 120, 1500, 250};
const int num_bills = 4;  // Total number of bills

// Function to initialize deposit
void init_deposit() {
    cout << "You are required to deposit some start-up cash in your account before proceeding." << endl;
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

// Function to handle deposit
void transfer() {

    // Request for account number and account holder's name at the start of the program
    cout << "Please enter the account number you are transferring money to: ";
    cin >> account_number;
    cin.ignore();  // To clear the input buffer before taking account holder's name
    cout << "Please enter the account holder's name: ";
    getline(cin, account_holder_name);

    // Print a greeting message
    cout << "You are transferring money to" << " " << account_holder_name << endl;
    int transfer_amount;
    cout << "How much would you like to deposit? M";
    cin >> transfer_amount;
    bank_balance -= transfer_amount;  // Add the deposit amount
    cout << "You have successfully deposited M" << transfer_amount << endl;
    cout << "Your updated balance is M" << bank_balance << endl;
}

// Function to perform subtraction (used for paying bills)
int subtraction(int current_balance, int bill_amount) {
    return current_balance - bill_amount;
}

// Function to show and pay bills
void bills_menu() {
    cout << "Bills available for payment:" << endl;
    for (int i = 0; i < num_bills; i++) {
        cout << i + 1 << ". " << bills[i] << " (M" << bill_amounts[i] << ")" << endl;
    }
    cout << num_bills + 1 << ". Exit" << endl;

    int choice;
    cout << "Which bill would you like to pay for today? ";
    cin >> choice;

    if (choice >= 1 && choice <= num_bills) {
        string ans;
        cout << "Are you sure you want to pay the " << bills[choice - 1] << " bill? (Yes/No): ";
        cin >> ans;

        if (ans == "Yes" || ans == "yes" || ans == "Y" || ans == "y") {
            if (bill_amounts[choice - 1] > bank_balance) {
                cout << "Insufficient balance to pay the " << bills[choice - 1] << " bill!" << endl;
            } else {
                bank_balance = subtraction(bank_balance, bill_amounts[choice - 1]);
                cout << bills[choice - 1] << " bill paid. Your updated balance is M" << bank_balance << endl;
            }
        } else {
            cout << "Bill payment canceled." << endl;
        }
    } else if (choice == num_bills + 1) {
        cout << "Exiting bill payment." << endl;
    } else {
        cout << "Invalid option selected." << endl;
    }
}

int main() {
    int option;

    // Request for account number and account holder's name at the start of the program
    cout << "Please enter your account number: ";
    cin >> account_number;
    cin.ignore();  // To clear the input buffer before taking account holder's name
    cout << "Please enter the account holder's name: ";
    getline(cin, account_holder_name);

    // Print a greeting message
    cout << "Welcome, " << account_holder_name << " (Account No: " << account_number << ")" << endl;

    init_deposit();  // Start with depositing money in your account

    do {
        show_menu();
        cout << endl;
        cout << "What would you like to do today? ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is M" << bank_balance << endl;
                break;
            case 2:
                transfer();
                break;
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
    } while (option != 5);

    return 0;
}
