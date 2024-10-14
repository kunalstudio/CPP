/*Create a class called Employee that contains the Name and Employee number (type long).
Include a member function called getData() to get data from the user for insertion into the object,
another function called putData() to display the data. Write a main() program to exercise this
class. It should create array of type Employee and then invite the user to input data for up to ‘n’
employees. Finally, it should print out the data for all the employees.*/
#include<iostream>
using namespace std;

class employee
{ char name[50];
  long int em_no;
public:

void getData()
{ cout<<"Enter Name and ID number of employee:";
  cin>>name>>em_no;
}

void putData()
{ cout<<"Name:"<<name<<endl;
  cout<<"Employee number:"<<em_no<<endl<<endl;
}

};

int main()
{ int n,i;
 cout<<"Enter the number of employees:";
 cin>>n;
 employee e[n];

 for(i=0;i<n;i++)
{ e[i].getData();
}

 for(i=0;i<n;i++)
{ e[i].putData();
}

}
