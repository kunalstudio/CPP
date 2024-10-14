#include<iostream>
using namespace std;

void getDetail();
int checkAge(int );

int main()
{ getDetail();
}

void getDetail()
{ char name[20];
  int age;
  int wardNo;

  cout<<"Enter your name:";
  cin>>name;
  cout <<"Enter your age:";
  cin>>age;
  cout<<"Enter yuor ward number:";
  cin>>wardNo;

  if(checkAge(age)==1)
  cout<<"Person is not eligible for voting\n ";
  else 
  cout<<"Person is not eligible for voting\n";
 }

int checkAge(int a)
{ if(a>=18)
  return 1;
  else 
  return 0;
}
