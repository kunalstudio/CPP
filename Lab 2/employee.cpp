#include<iostream>
using namespace std;

class employee
{ private:
  char name[10];
  int salary;    //basic salary

  public:
  void get()
  { cout<<"Enter your Name:";
    cin>>name;
    cout<<"Enter your basic salary:";
    cin>>salary;
  }
  void put()
  { cout<<"\nName:"<<name<<"\n";
    cout<<"Basic salary:"<<salary<<"\n\n";
  }
  void da()
  { double da;
    da=70*salary/100;
    cout<<"DA:"<<da<<"\n";
  }
  void hra()
  { double hra;
    hra =10*salary/100;
    cout<<"HRA:"<<hra<<"\n";
  }
  void ns()
  { double ns;
    ns=salary+70*salary/100+10*salary/100;
    cout<<"Net salary:"<<ns<<"\n";
  }
};
int main()
{ employee e1;
  e1.get();
  e1.put();
  e1.da();
  e1.hra();
  e1.ns();
}
    
