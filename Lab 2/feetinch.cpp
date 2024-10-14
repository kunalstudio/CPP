#include<iostream>
using namespace std;

class feet 
{ private:
  double feet;
  
  public:
  void get()
  { cout<<"Enter distance in feet:";
    cin>>feet;
  }
  void put()
  { cout<<"\nFeets:"<<feet<<"\n";
    
  } 
  void inch()
  { double inch;
    inch =12*feet;
    cout<<"inch:"<<inch<<"\n";
  }
};
int main()
{feet i1;
 i1.get();
 i1.put();
 i1.inch();
}
