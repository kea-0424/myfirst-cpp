#include <iostream>

using namespace std;

void menu () {
cout << "1. Age" << endl;
cout << "2. Largest between two numbers" << endl;
cout << "3. Finding even and odd" << endl;
cout << "4. Interview" << endl;
}
void age_check (int age) {
if (age < 18) {
cout << "Your an underage" << endl;
}
else if (age >=18 && age < 30) {
cout << "Your an adult" << endl;
}
else {
cout << "You are old" << endl;
}
}
void largest_number (int Num1,int Num2) {
if (Num1 > Num2) {
cout << "The first number is larger than the second number" << endl;
}
else if (Num1 < Num2) {
cout << "The second number is larger than the first number" << endl;
}
else cout << "These numbers are equal " << endl;
}
void even_odd (int x) {
if (x % 2 == 0) {
cout << "Your number is an Even number" << endl;
}
else {cout << "Your number is an Odd number" << endl;}
}
void interview (int crop, int market,int quantity){
cout << "What do you want to grow on your farm: " << endl;
cout << "1. Corn" << endl;
cout << "2. Rice" << endl;
cout << "3. Potatoes" << endl;
cout << "4. Peaches" << endl;
cin >> crop;
switch (crop) {
case 1: cout << "Would like to produce for Primary or Secondary Market" << endl;
        cout << "1. Primary Market(Manufacturing) " << endl;
        cout << "2. Secondary Market (Wholesaling) "<< endl;
        cin >> market;
        break;
case 2: cout << "There's not enough water in your country " << endl;
        break;
case 3: cout << "How many tons of potatoes do you want to produce per harvest(10-200)tons" << endl;
        cin >> quantity;
        if (quantity > 40 && quantity < 70) {
        cout << "You will need 4 acres of field" << endl;
        }
}
}

int main()
{
int choice,z = 0 ;
int age, Num1, Num2,x,crop,market,quantity;
string answer;
while (z < 2) {

menu();
cout << "Enter your choice(1-4): ";
cin >> choice;
 switch (choice) {

 case 1: cout << "Enter your age: ";
        cin >> age;
 age_check(age);
 break;

 case 2: cout << "Enter your first number: ";
         cin >> Num1;
         cout << "Enter your second number: ";
         cin >> Num2;
   largest_number(Num1,Num2);
   break;

   case 3: cout <<"Enter a Number: ";
          cin >> x;
          even_odd(x);
  break;

  case 4: interview(crop,market,quantity);
}
}



    return 0;
}
