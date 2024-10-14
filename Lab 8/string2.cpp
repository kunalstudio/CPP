/*Create a string S1 to store the following sentence “I WILL BE FAILED IN C++ LAB” and create a
string S2 to store the sentence “GET S GRADE”. Write a C++ program to remove ‘BE’ and ‘FAILED’
from S1 and to insert S2 between the words ‘WILL’ and ‘IN’ of S1.*/


#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{ string s1,s2;
 
 s1="I WILL BE FAILED IN C++ LAB";
 s2="GET S GRADE";

  s1.erase(7,14);
  cout<<s1<<endl;

  s1.insert(7,s2);
  cout<<s1<<endl;
return 0;
}
