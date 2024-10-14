#include<iostream>
using namespace std;

class square 
{ private:
  double side;
  
  public:
  void get()
  { cout<<"Enter Side length:";
    cin>>side;
  }
  void put()
  { cout<<"\nSide length:"<<side<<"\n\n";
  } 
  void perimeter()
  { double perimeter;
    perimeter=4*side;
    cout<<"Perimeter:"<<perimeter<<"\n";
  }
 void area()
  { double area;
    area = side*side;
    cout<<"Area:"<<area<<"\n";
  }
};
int main()
{ square s1;
 s1.get();
 s1.put();
 s1.perimeter();
 s1.area();
}
