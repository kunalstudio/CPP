#include<iostream>
#include<cstring>
using namespace std;

class account 
{ char acc_name[50];
  int acc_id;
  int balance;

  public:
  account()
  { strcpy(acc_name,"\0");
    acc_id=-1;
    balance=1000;
  }

  account(char a[50],int b,int c)
  { strcpy(acc_name,a);
    acc_id=b;
    balance=c;
  }
 
  void get()
  { cout<<"Enter your name,account number:\n";
    cin>>acc_name>>acc_id;
  }

  void deposite()
  { int d;
    cout<<"Enter amount to be depoisted:";
    cin>>d;
    balance=balance+d;
  }

  void withdrawl()
  { int w;
    cout<<"Enter amount to be withdrawl:";
    cin>>w;
    balance=balance-w;
  }

  void put()
  { cout<<"Name:"<<acc_name<<endl<<"Account number:"<<acc_id<<endl<<"Balance:"<<balance<<endl<<endl;
  }

  ~account()
   { cout<<"Destroyed\n";
   }
};

int main()
{ account a1,a2,a3("Cat",1,5000);
  
  a1.put();
  a1.deposite();
  a1.withdrawl();
  a1.put();

  a2.get();
  a2.put();
  a2.deposite();
  a2.withdrawl();
  a2.put();
 
  a3.put();
  a3.deposite();
  a3.withdrawl();
  a3.put();
}
