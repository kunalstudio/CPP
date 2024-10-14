#include<iostream>
using namespace std;

void even(int a)
{ if (a%2==0)
  cout<<"Given number is even\n";
  else
  cout<<"Given number is not even\n";
}

int main()
{ int x;
  cout<<"Enter any number:";
  cin>>x;
  even(x);
}
