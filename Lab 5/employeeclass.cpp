#include<iostream>
#include<cstring>
using namespace std;

class employee
{ char name[50];
  int basic_salary;
  int net_salary;

  public:
  employee()
  { strcpy(name,"\0");
    basic_salary=0;
    net_salary=0;
  }

  employee(char a[50],int b)
  { strcpy(name,a);
    basic_salary=b;
  }

  void get()
  { cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your basic salary :";
    cin>>basic_salary;
  }

  void display()
  { cout<<"Name:"<<name<<endl<<"Basic salary:"<<basic_salary<<endl;
  }

  void compute()
  { int da,hra=4000;
    net_salary=basic_salary+hra+(.38*basic_salary);
    cout<<"Net salary:"<<net_salary<<endl<<endl;
  }

  ~employee()
   { cout<<"Destroyed\n";
   }
};

int main()
{ employee e1,e2,e3("Cat",10000);
  e1.display();
  e1.compute();
  e2.get();
  e2.display();
  e2.compute();
  e3.display();
  e3.compute();
}
  
