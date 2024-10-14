#include<iostream>
using namespace std;

int main()
{ int a,i,f=1;
 cout<<"Enter any natural number:";
 cin>>a;
 
for(i=1;i<=a;i++)
 f=f*i;

cout<<"Factorial of given number is "<<f<<"\n";
}

