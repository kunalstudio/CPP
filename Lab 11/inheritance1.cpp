/*Create a base class employee and get the details of the employee&#39;s number, name,
designation, and department. Create a derived class and perform the payroll
calculation of gross salary and net salary with a basic salary of Rs. 53,000, 20% of
DA, 5% of HRA, and 6% of PF, and display the result in the bill format.*/

#include<iostream>
#include<string>
using namespace std;

class employee
{ int e_no;
  string name;
  string designation;
  string department;
 
public:
employee():e_no(0),name(""),designation(""),department("")
{}

 void get()
{ cout<<"Enter the employee Name, ID number , designation and department:\n";
  cin>>name>>e_no>>designation>>department;
}

void display()
{ cout<<endl<<"Name:"<<name<<endl<<"Employee number:"<<e_no<<endl<<"Designation:"<<designation<<endl<<"Department:"<<department<<endl;
}
};

class salary:public employee
{ int DA,HRA,PF,BS,NS,GS;
public:

salary():DA(0),HRA(0),PF(0),BS(0),GS(0),NS(0)
{}

void getData()
{ cout<<"Enter your basic salary:";
  cin>>BS;
}

void calSalary()
{ DA=(20*BS/100);
  HRA=(5*BS/100);
  PF=(6*BS/100);
  
  NS = BS+DA+HRA+PF;
  GS = NS-PF;
}

void show()
{ cout <<endl<<"Basic salary:"<<BS<<endl<<"Net salary:"<<NS<<endl<<"Gross salary:"<<GS<<endl;
}
};

int main()
{ salary a;
  a.get();
  a.getData();
  a.calSalary();
  a.display();
  a.show();
}
