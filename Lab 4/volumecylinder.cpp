/*Program to compute the volume of a cylinder using a function compute(), with default
values - 1 for radius of the base of the cylinder and 2 for height of the cylinder. Calculate and
return the volume of the cylinder, by calling the function from the main(), with and without
arguments.*/

#include<iostream>
using namespace std;

float volume(int =1,int =2);

int main()
{ int r,h;
  cout<<"Enetr radius of cylinder:";
  cin>>r;
  cout<<"Enter height of cylinder:";
  cin>>h;

  cout<<"Volume:"<<volume(r,h)<<"\n";
  cout<<"Volume:"<<volume()<<"\n";
}

float volume(int a,int b)
{ float volume;
  volume=3.14*a*a*b;
  return volume;
}
