#include <iostream>

using namespace std;
int age;
void my_function (int age){
if (age % 2 == 0) {
cout << "Your Age is an even number" << endl;
}
else {
cout << "Your Age is an odd number" << endl;
}
}


int main()
{
   int age;

   cout << "Enter your Age " << endl;
   cin >> age;
my_function(age);

    return 0;
}
