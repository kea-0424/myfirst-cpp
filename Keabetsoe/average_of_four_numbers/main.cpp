
#include <iostream>

using namespace std;

int main()
{
    // declaration of variables
    int Num1 ;
    int Num2 ;
    int Num3 ;
    int Num4 ;
    int Sum ;
    int Average ;
    //Input
    cout << " Enter the first number? " << endl;
    cin >>  Num1 ;
    cout << " Enter the Second number? " << endl;
    cin >>  Num2 ;
    cout << " Enter the third number? " << endl;
    cin >>  Num3 ;
    cout << " Enter the fourth number? " << endl;
    cin >>  Num4 ;
    // Processing
     Sum = Num1 + Num2 + Num3 + Num4 ;
     Average = Sum / 4;
   // Output
    cout << " The average of these four numbers is "<< Average << endl;
    return 0;
}
