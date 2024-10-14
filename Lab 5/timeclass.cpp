#include<iostream>
using namespace std;

class Time
{ int hour,minutes,second;
 
  public:
  Time()
  { hour=0; 
    minutes=0;
    second=0;
  }

  Time(int a,int b,int c)
  { hour=a;
    minutes=b;
    second=c;
  }

  void get()
  { cout<<"enter hours,minutes and seconds:\n";
    cin>>hour>>minutes>>second;
  }

  void display()
  { cout<<hour<<" hours "<<minutes<<" minutes "<< second<<" seconds\n";
  }

  void compute()
  { int s;
   s=(hour*3600)+(minutes*60)+second;
   cout<<"Total number of seconds:"<<s<<endl<<endl;
  }

  ~Time()
   { cout<<"Destroyed\n";
   }
};

int main()
{ Time t1,t2,t3(5,45,30);
  t1.display();
  t1.compute();
 
  t2.get();
  t2.display();
  t2.compute();
  
  t3.display();
  t3.compute();
}
