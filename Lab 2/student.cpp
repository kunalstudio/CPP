#include<iostream>
using namespace std;

class student 
{ private:
  char name[10];
  int regno;
  double m1,m2,m3;
 
  public:
  void get()
  { cout<<"Enter your Name:";
    cin>>name;
    cout<<"Enter your register number:";
    cin>>regno;
    cout<<"Enter your marks in three subjects:\n";
    cin>>m1;
    cin>>m2;
    cin>>m3;
  }
  void put()
  { cout<<"\nName:"<<name<<"\n";
    cout<<"Register number:"<<regno<<"\n";
  }
  void totalmarks()
  { double totalmarks;
    totalmarks=m1+m2+m3;
    cout<<"Total marks:"<<totalmarks<<"\n";
  }
  void totalgrade()
  { double total;
    total=(m1+m2+m3)/3;
    if(total>90)
    cout<<"S grade\n";
   else if(80<total&&total<=90)
    cout<<"A+ grade\n";
   else if(70<total&&total<=80)
    cout<<"A grade\n";
   else if(60<total&&total<=70)
    cout<<"B grade\n";
   else if(50<total&&total<=60)
    cout<<"C grade\n";
   else
    cout<<"F grade\n";
  }
};
int main()
{ student s1;
  s1.get();
  s1.put();
  s1.totalmarks();
  s1.totalgrade();
}
