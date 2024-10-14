/*Define a base class called insurance with members of policy_no, policyholder name,
age, address, and sum assured. Then define two derived classes as life and general.
The life class has a member for premium mode (annual / semi-nnual / quarterly/
monthly), nominee, and policy term (no. of years). The general class should include
vehicle number, vehicle type (car, two-wheeler, or bus), and cubic capacity (cc).
Implement appropriate member functions to input and display values. */

#include<iostream>
#include<string>
using namespace std;

class insurance
{ int policy_no;
  string name;
  int age,sum;
  string address;
public:

void getData()
{ cout<<"Enter \nPolicy number :";
  cin>>policy_no;
  cout<<"Name :";
  cin>>name;
  cout<<"Address :";
  cin>>address;
}

void showData()
{ cout<<endl<<"Name :"<<name<<endl<<"Policy number :"<<policy_no<<endl<<"Address :"<<address<<endl;
}
};

class life : public insurance
{ int policy_term;
  string premium;
  string nominee;
public:

void getData()
{ cout<<"Enter \n No. of years policy is valid :";
  cin>>policy_term;
  cout<<"Insurance type (annual / semi-annual / quarterly/ monthly) :";
  cin>>premium;
  cout<<"Nominee name :";
  cin>>nominee;
}

void showData()
{ cout<<"Policy Term :"<<policy_term<<endl<<"Insurance Type :"<<premium<<endl<<"Nominee name :"<<nominee<<endl;
}
};

class general : public insurance
{ int vehicle_no;
  int capacity;
  string vehicle_type;
public:

void getData()
{ cout<<"Enter\n Vehicle number :";
  cin>>vehicle_no;
  cout<<"Vehicle type (car, two-wheeler, or bus):";
  cin>>vehicle_type;
  cout<<"Capacity :";
  cin>>capacity;
}

void showData()
{ cout<<endl<<"Vehicle number :"<<vehicle_no<<endl<<"Vehicle type :"<<vehicle_type<<endl<<"Vehicle capacity :"<<capacity<<endl;
}
};

int main()
{ life l;
 
  l.insurance::getData();
  l.life::getData();
  l.insurance::showData();
  l.life::showData();

  general g;

  g.insurance::getData();
  g.general::getData();
  g.insurance::showData();
  g.general::showData();
}


 
  
