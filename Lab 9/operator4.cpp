/*4. Write a C++ program that overloads the + operator and relational operators (suitable) to
perform the following operations:
a) Concatenation of two strings.
b) Comparison of two strings*/

#include<iostream>
#include<string>
using namespace std;

class String 
{ string s;
public :

void get()
{ cout << "Enter any string:";
  getline(cin,s);
}

String operator +(String &t)
{ String temp;
  temp.s=s+t.s;
  return temp;
}

bool operator ==(String &t)
{ if(s==t.s)
  return true;
  else 
  false;
}

void put()
{ cout<<"String:"<<s<<endl;
}
};

int main()
{ String s1,s2;
  s1.get();
  s2.get();

  String s3;
  s3=s1+s2;

  s3.put();

  if(s1==s2)
  cout<<"Both the strings are equal"<<endl;
  else
  cout<<"Both the strings are not equal"<<endl;
}
  
  
