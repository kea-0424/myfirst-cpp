#include <iostream>
using namespace std;
void my_identity (string f_name, string s_name, int age, int contact) {

cout << f_name<< " "<< s_name<< " " << age << " "<< " Years old" << " Phone No: " <<contact<< endl;

}
int main()
{
string f_name, s_name;
int age, contact;

cout << "Please enter your full details" << endl;
cout << "Firstname: ";
 cin >> f_name;
cout << "Surname: ";
cin >> s_name;
cout << "Age: ";

cin >> age;
cout << "Contacts: ";
cin >> contact;
  my_identity(f_name, s_name, age, contact);
    return 0;
}
