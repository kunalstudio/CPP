#include<iostream>
using namespace std;
 class Date
{ int date;
  int month;
  int year;
 
  public:
  Date()
  { date=1;
    month=1;
    year=24;
  }
  
  void get()
  { cout<<"Enter date,month and year:\n";
    cin>>date>>month>>year;
  }

  void display()
  { cout<<date<<"/"<<month<<"/"<<year<<endl;
  }
};

int main()
{ Date d1,d2;
 d1.get();
 d1.display();
 d2.display();
}
