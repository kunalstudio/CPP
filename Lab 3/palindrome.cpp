#include<iostream>
using namespace std;

int main()
{ int n,num,remainder,reversed=0;
  cout<<"Enter any number:";
  cin>>num;

  n=num;
while(n!=0)
{ remainder=n%10;
  reversed=reversed*10+remainder;
  n=n/10;
}

if(reversed==num)
cout<<"Given number is a Palindrome number\n";
else
cout<<"Given number is not a Palindrome number\n";
}
