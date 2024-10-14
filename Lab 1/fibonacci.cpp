#include<iostream>
using namespace std;
int main()
{int n1=0,n2=1,n,i,n3;
 cout<<"Enter the limit n:";
 cin>>n;
 for(i=2;i<n;i++)
 { n3=n1+n2;
   cout<<n3<<"\t";
   n1=n2;
   n2=n3;
 }
}
