#include<iostream>
using namespace std;
int x[100],i=0;
int getNumber();
int checkNumber();

int call()
{ int a;
  cout<<"Press\n*1 to enter number\n*2 to check number\n*3 to exit\n\n";
  cin>>a;
  if(a==1)
  getNumber();
  else if(a==2)
  checkNumber();
  else 
  cout<<"Thank you\n";
}

int main()
{ call();
}

int getNumber()
{ cout<<"Enter any number";
  cin>>x[i];
  i++;
  call();
}

int checkNumber()
{ int k,j=0,l=0;
 for(k=0;k<=i;k++)
  { if(x[k]>0)
    j++;
    if(x[k]<0)
    l++;
  }
cout<<"Total number of positive terms:"<<j<<"\n";
cout<<"Total number of negative terms:"<<l<<"\n";
call();
}
  
