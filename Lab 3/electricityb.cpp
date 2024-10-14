#include<iostream>
using namespace std;

int main()
{ int unit ,rs=0;
 cout<<"Enter total no. of units used:";
 cin>>unit;

if(unit<=100)
rs=100;
else if(unit<=300)
rs=(unit-100)*3+100;
else if(unit<=500)
rs=(unit-300)*4.50+200*3+100;
else
rs=unit*6;

cout<<"Electricity bill:"<<rs<<"rs\n";
}
