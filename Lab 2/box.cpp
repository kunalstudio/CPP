#include<iostream>
using namespace std;

class Box
{ private:
  double length;
  double width;
  double height;

  public:
  void get()
  { cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
    cout<<"Enter height:";
    cin>>height;
  }
  void put()
  { cout<<"\nLength:"<<length<<"\n";
    cout<<"Width:"<<width<<"\n";
    cout<<"Height:"<<height<<"\n\n";
  } 
  void volume()
  { double volume;
    volume = length*width*height;
    cout<<"Volume:"<<volume<<"\n";
  }
};
int main()
{ Box b1;
 b1.get();
 b1.put();
 b1.volume();
}
  
