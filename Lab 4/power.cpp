/*Raising a number ‘N’ to the power ‘P’ is the same as multiplying N by itself P times. Write a
function called power() that takes N (double) and P (int) as input, and returns the result N*P
as a double value. Use a default argument of 2 for P, so that if this argument is omitted, the
number N will be squared. Overload power() function, to work with int, long, and float.
Overload the power() function for char datatype also, which should print P times the given
character N. Write the main() program to exercise these overloaded functions with all
argument types.*/


#include<iostream>
using namespace std;

double power(double ,int =2);
int power(int ,int=2);
float power(float ,int =2);
char power(char,int =2);

int main()
{ int p;
double n;
int a;
float b;
char c;

cout<<"Enter any power:";
cin>>p;
cout<<"Enter any integer number:";
cin>>a;
cout<<"Enter any alphabet:";
cin>>c;
cout<<"Enter any decimal number:";
cin>>b;
cout<<"Enter any number:";
cin>>n;

cout<<"Number:"<<power(n,p)<<"\n";
cout<<"Number:"<<power(n)<<"\n";
cout<<"Integer:"<<power(a,p)<<"\n";
cout<<"Integer:"<<power(a)<<"\n";
cout<<"Decimal:"<<power(b,p)<<"\n";
cout<<"Decimal:"<<power(b)<<"\n";
power(c,p);
cout<<"\n";
power(c);
}

int power(int a,int b)
{ int x=1;
   for(int i=0;i<b;i++)
   { x=x*a;
   }
 return x;
}

float power(float a,int b)
{ float x=1;
   for(int i=0;i<b;i++)
   { x=x*a;
   }
 return x;
}

double power(double a,int b)
{ int x=1;
   for(int i=0;i<b;i++)
   { x=x*a;
   }
 return x;
}

char power(char a,int b)
{ 
   for(int i=0;i<b;i++)
   {cout<<a;
   }
 
}
