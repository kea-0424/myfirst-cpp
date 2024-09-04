#include <iostream>

using namespace std;

void menu() {
    cout << "1. Age" << endl;
    cout << "2. Largest between two numbers" << endl;
    cout << "3. Finding even and odd" << endl;
    cout << "4. Interview" << endl;
    cout << "5. Exit" << endl;
}

void age_check(int age) {
    if (age < 18) {
        cout << "You are underage" << endl;
    } else if (age >= 18 && age < 30) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are old" << endl;
    }
}

void largest_number(int Num1, int Num2) {
    if (Num1 > Num2) {
        cout << "The first number is larger than the second number" << endl;
    } else if (Num1 < Num2) {
        cout << "The second number is larger than the first number" << endl;
    } else {
        cout << "These numbers are equal" << endl;
    }
}

void even_odd(int x) {
    if (x % 2 == 0) {
        cout << "Your number is an Even number" << endl;
    } else {
        cout << "Your number is an Odd number" << endl;
    }
}

void interview() {
    int crop, market, quantity;
    cout << "What do you want to grow on your farm: " << endl;
    cout << "1. Corn" << endl;
    cout << "2. Rice" << endl;
    cout << "3. Potatoes" << endl;
    cout << "4. Peaches" << endl;
    cin >> crop;

    switch (crop) {
        case 1:
            cout << "Would you like to produce for the Primary or Secondary Market?" << endl;
            cout << "1. Primary Market (Manufacturing)" << endl;
            cout << "2. Secondary Market (Wholesaling)" << endl;
            cin >> market;
            if (market == 1) {
                cout << "You chose the Primary Market (Manufacturing)." << endl;
            } else if (market == 2) {
                cout << "You chose the Secondary Market (Wholesaling)." << endl;
            } else {
                cout << "Invalid option." << endl;
            }
            break;

        case 2:
            cout << "There's not enough water in your country to grow Rice." << endl;
            break;

        case 3:
            cout << "How many tons of potatoes do you want to produce per harvest (10-200 tons)? ";
            cin >> quantity;
            if (quantity >= 10 && quantity <= 200) {
                if (quantity > 40 && quantity < 70) {
                    cout << "You will need 3 acres of field." << endl;
                } else {
                    cout << "Your production quantity is " << quantity << " tons." << endl;
                }
            } else {
                cout << "Invalid quantity. Must be between 10 and 200 tons." << endl;
            }
            break;

        case 4:
            cout << "Peaches require a moderate climate and a specific growing season." << endl;
            break;

        default:
            cout << "Invalid crop choice." << endl;
    }
}

int main() {
    int choice;
    bool keep_running = true;

    while (keep_running) {
        menu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                int age;
                cout << "Enter your age: ";
                cin >> age;
                age_check(age);
                break;

            case 2:
                int Num1, Num2;
                cout << "Enter your first number: ";
                cin >> Num1;
                cout << "Enter your second number: ";
                cin >> Num2;
                largest_number(Num1, Num2);
                break;

            case 3:
                int x;
                cout << "Enter a number: ";
                cin >> x;
                even_odd(x);
                break;

            case 4:
                interview();
                break;

            case 5:
                keep_running = false;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}
