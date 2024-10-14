#include<iostream>
using namespace std;

class triangle  
{ private:
  double height;
  double breadth;
  
  public:
  void get()
  { cout<<"Enter height:";
    cin>>height;
    cout<<"Enter breadth:";
    cin>>breadth;
  }
  void put()
  { cout<<"\nHeight:"<<height<<"\n";
    cout<<"Breadth:"<<breadth<<"\n\n";
  } 
  void area()
  { double area;
    area =0.5*height*breadth;
    cout<<"Area:"<<area<<"\n";
  }
};
int main()
{ triangle t1;
 t1.get();
 t1.put();
 t1.area();
}
