#include<iostream>
using namespace std;

class employee
{ private:
  char name[10];
  int salary;    //basic salary
  int daa,hraa;

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
  {// double da;
    daa=70*salary/100;
    cout<<"DA:"<<daa<<"\n";
  }
  void hra()
  { //double hra;
    hraa =10*salary/100;
    cout<<"HRA:"<<hraa<<"\n";
  }
  void ns()
  { double ns;
    ns=salary+daa+hraa/*70*salary/100+10*salary/100*/;
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
    
