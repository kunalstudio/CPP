#include<iostream>
using namespace std;

inline int sum(int a,int b)
{ return a+b;
}
int main()
{int x,y;
cout<<"Enter two numbers:\n";
cin>>x>>y;
cout<<"Sum:"<<sum(x,y)<<"\n";
}
