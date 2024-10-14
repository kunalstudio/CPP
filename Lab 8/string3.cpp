/*Write a program to compare two C++ strings (String class) and find whether they are
exactly equal or not.*/

#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{ string a,b;
  cout<<"Enter any sentence:\n";
  getline(cin,a);
  cout<<"Enter any sentence:\n";
  getline(cin,b);
  cout<<a<<endl<<b<<endl;

  if(a==b)
  cout<<"String 1 is equal to string 2"<<endl;
  else
  cout<<"String 1 is not equal to string 2"<<endl;

return 0;

}
