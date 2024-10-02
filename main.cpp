#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
   float num1,num2;
   cout <<"Input the Number1: ";
   cin >>num1;

    cout <<"Input the Number2: ";
   cin >>num2;

   cout <<showpoint; //showpoint:jokhon use kora hobe tarpor theke output .soho 6 ghor dekhabe

   float sum = num1+num2;
   cout <<"The Sum is : "<<sum;
   cout <<endl;

   cout <<noshowpoint; //noshowpoint:jokhon use kora hobe tarpor theke output doshomik  dekhabe na

   float sub = num1-num2;
   cout <<"The Subtraction is: "<<sub;
   cout <<endl;

   cout << fixed; // doshomiker por ghor gula dekhabe ja setpercision e j koighor set kora thakbe
   cout <<setprecision(5); //setprecision:jokhon use kora hobe tarpor theke output doshomik soho 10 ghor  dekhabe na
   float mul = num1*num2;
   cout <<"The Multiplication is: "<<mul;
   cout <<endl;

   double div = (float)num1/num2;   //type casting:declare datatype onno datatype e convert kora
   cout <<"The Division is: "<<div;
   cout <<endl;




   getch();
}
