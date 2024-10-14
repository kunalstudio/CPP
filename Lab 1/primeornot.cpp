#include<iostream>
using namespace std;
int main()
{ int a,i,flag=0;

 cout <<"Enter any natural number:";
 cin>>a;

 if(a<2)
 flag=1;

 for(i=2;i<=a/2;i++)
 { if(a%i==0)
   flag=1;
   break;
 }

 if(flag==0)
 cout<<"Entered number is not a prime number\n";
 else
 cout<<"Entered number is a prime number\n";
}
