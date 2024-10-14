#include<iostream>
#include<math.h>
using namespace std;

class point 
{ int x,y;

  public:
  point()
  { x=0;
    y=0;
  }

  point(int a,int b)
  { x=a;
    y=b;
  }

  void read()
  { cout<<"Enter the value of x and y coordinates respectively:\n";
    cin>>x>>y;
  }
  
  void display()
  { cout<<"X="<<x<<endl<<"Y="<<y<<endl;
  }
  
  void find_distance()
  { float d;
    d=sqrt(x*x+y*y);
    cout<<"Distance:"<<d<<endl<<endl;
  }

  ~point()
   { cout<<"Destroyed\n";
   }
};

int main()
{ point p1,p2,p3(4,3);
  
 p1.display();
 p1.find_distance();
 p2.read();
 p2.display();
 p2.find_distance();
 p3.display();
 p3.find_distance();
}
