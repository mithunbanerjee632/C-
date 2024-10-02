#include<iostream>
#include<conio.h>
using namespace std;
int main(){
   int num1,num2;
   cout <<"Input the Number1: ";
   cin >>num1;

    cout <<"Input the Number2: ";
   cin >>num2;

   int sum = num1+num2;
   cout <<"The Sum is : "<<sum;
   cout <<endl;

   int sub = num1-num2;
   cout <<"The Subtraction is: "<<sub;
   cout <<endl;

   int mul = num1*num2;
   cout <<"The Multiplication is: "<<mul;
   cout <<endl;

   double div = (float)num1/num2;   //type casting:declare datatype onno datatype e convert kora
   cout <<"The Multiplication is: "<<div;
   cout <<endl;

   double rem = num1%num2;
   cout <<"The Remainderr is: "<<rem;
   cout <<endl;
   cout << "thats it!";


   getch();
}
