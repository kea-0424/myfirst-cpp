#include <iostream>
#include <ctime>
#include <conio.h>
#include <wondows.h>

using namespace std;
int information();
void corona();
void normal();
void total_negative();
void patient ();
int age,dat,a;
char name [40], father_name[40],gender[10];
char b,c,d,e,f,g,h,i,j,k,l,y,ch;
charm,n,o,p,q,r,s,t,u,v,w,x,z;

int main()
{
  system ("color Fc");
  cout<<"**************************************"<<endl;
  cout<<"              Covid-28 Test         "<<endl;
  cout<<"            Liviticus Hospital      "<<endl;

  cout<<"**************************************"<<endl;
  cout<<endl;
  cout<<"Press any key to Continue...."<<endl;
  getch();
  system ("cls");
  system("color OF");
  cout<<"**************************************"<<endl;
  cout<<"                WELCOME               "<<endl;
  cout<<"              TO OUR HUMAN            "<<endl;
  cout<<"            DIAGNOSIS SYSTEM          "<<endl;
  cout<<"**************************************  "<<endl;
  cout<<endl;
  cout<< "Please enter your presonal information which is required"<<endl<<endl;
  information();
  system("cls");
  system("color OF");



  cout<<"Enter 1 for Corona Test"<<endl<<endl<<endl;

  //cout<<"Please enter your choice"<<endl;
  cin>>a;
  while (a<1||a>1) {
     cout<<"Invalid entry"<<endl<<endl;
     cout<<"Please enter valid choice"<<endl;
     cin>>a;
  }
system("cls");
system("color OF");
if (a==1)
{
cout<<"**************************************"<<endl;
cout<<"COVID-28"<<endl;
cout<<"**************************************"<<endl<<endl;
cout<<"NOW WE START Test"<<endl<<endl;
cout<<"Please answer the following questions"<<endl;
cout<<"with either 'yes' for y and 'no' for n"<<endl<<endl;
cout<<"Does the patient have fever"<<endl;
cin>>b;
cout<<"Has the patient had a fever for the previous 1 week"<<endl;
cin>>c;
cout<<"Does the patient have a headache"<<endl;
cin>>d;
cout<<"Does the patient have running nose"<<endl;
cin>>e;

cout<<"Does patient have a dry cough"<<endl;
cin>>g;
cout<<"Does the patient have a body ache"<<endl;
cin>>h;
cout<<"Does the patient have loss of smell or taste"<<endl;
cin>>i;
cout<<"Does the patient have a sore throat"<<endl;
cin>>j;
cout<<"Does patient have  difficulty in breathing or shortness of breath"<<endl;
cin>>k;








}
    return 0;
}
