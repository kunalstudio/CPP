#include<iostream>
using namespace std;

int main()
{ int n,i,b;
cout<<"Enter any natural number to be reversed:";
cin>>n;

for(i=1;b!=0;i++)
{ b=n%10;

if(b==0)
break;

 cout<<b;
 n=n/10;
}
} 
