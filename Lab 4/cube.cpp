/*Write a program to calculate cube of a given variable using inline function and return
the result by reference.*/

#include<iostream>
using namespace std;

inline void cube(int &);

int main()
{ int a;
cout<<"Enter any number:";
cin>>a;

cube(a);

cout<<"Cube:"<<a<<"\n";
}

inline void cube(int &x)
{ x=x*x*x;
}
