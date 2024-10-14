/*Create a Class String Manipulation with private string objects (eg: string s1,s2) and public
methods: int merge (string s1, string s2) : this method will return 1 for merging two different
strings and return 0 for merging two same strings. int compare () : this method should
compare two strings and return 1 if first string is greater; 0 otherwise*/

#include<iostream>
#include<string>
using namespace std;
class StringManipulator 
{ private:
  string s1,s2;
  
public :
 
 int merge()
 { if(s1==s2)
   return 1;
   else
   return 0;
 }

 int compare()
{ if(s1>s2)
  return 1;
  else 
  return 0;
}

void get()
{ cout<<"Enter first string: \n";
  getline(cin,s1);
  cout<<"Enter second string: \n";
  getline(cin,s2);
}
};

int main()
{ StringManipulator a;
  a.get();
  cout<<"Merge result:"<<a.merge()<<endl;
  cout<<"Compare result:"<<a.compare()<<endl;
}

 
