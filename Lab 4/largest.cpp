/*Write a program to find the largest of the three numbers using inline functions.*/

#include<iostream>
using namespace std;

inline int largest (int ,int ,int );

int main()
{ int a,b,c;

cout<<"Enter any three number:\n";
cin>>a>>b>>c;

cout<<"Largest:"<<largest(a,b,c)<<"\n";
}

inline int largest(int x,int y,int z)
{ int max;
  
   max=x;
   if(max<y)
   max=y;
   if(max<z)
   max=z;
return max;
}
