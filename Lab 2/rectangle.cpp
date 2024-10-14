#include<iostream>
using namespace std;

class rectangle 
{ private:
  double length;
  double breadth;
  
  public:
  void get()
  { cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
  }
  void put()
  { cout<<"\nLength:"<<length<<"\n";
    cout<<"Breadth:"<<breadth<<"\n\n";
  } 
  void perimeter()
  { double perimeter;
    perimeter=2*(length+breadth);
    cout<<"Perimeter:"<<perimeter<<"\n";
  }
 void area()
  { double area;
    area = length*breadth;
    cout<<"Area:"<<area<<"\n";
  }
};
int main()
{ rectangle r1;
 r1.get();
 r1.put();
 r1.perimeter();
 r1.area();
}
  
