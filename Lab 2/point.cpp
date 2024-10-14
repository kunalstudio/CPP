//distance of point from origin
#include<iostream>
#include<math.h>
using namespace std;

class point
{ private:
  int x1,y1;
  
  public:
  void get()
  { cout<<"Enter x and y coordinates respectively:";
    cin>>x1;
    cin>>y1;
  }
  void put()
  { cout<<"X1:"<<x1<<"\n";
    cout<<"y1:"<<y1<<"\n";
  }
  void distance()
  { double distance ;
    distance = sqrt(x1*x1+y1*y1);
    cout<<"Distance:"<<distance<<"\n";
  }
};
int main()
{ point p;
 p.get();
 p.put();
 p.distance();
}
