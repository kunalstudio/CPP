/*Write a program to find the absolute value of an integer, double and float value using
function overloading.*/

#include<iostream>
using namespace std;

int absolute(int);
float absolute(float);
double absolute(double);

int main()
{ int a=-3;
  float b=-3.14;
  double c=-9.99;

cout<<"Integer:"<<absolute(a)<<"\n";
cout<<"Float:"<<absolute(b)<<"\n";
cout<<"Double:"<<absolute(c)<<"\n";
}

int absolute (int x)
{ if(x<0)
   x=x*(-1);
  return x;
}

float absolute (float x)
{ if(x<0)
   x=x*(-1);
  return x;
}

double absolute (double x)
{ if(x<0)
   x=x*(-1);
  return x;
}
