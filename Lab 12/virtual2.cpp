/*Create a class called Shape with three data members m1,m2,aval(for storing calculated area) of
double datatype and two member functions getdata() and display().and one pure virtual
function area(). Derive classes called Rectangle, Triangle from Shape, override the pure virtual
functions to calculate the area.. Write the main function to exercise runtime polymorphism.*/

#include<iostream>
using namespace std;

class Shape 
{protected:
  double m1,m2,aval;
  
public:

  void getData()
{ cout<<"Enter side m1 and m2 :\n";
  cin>>m1>>m2;
}

  void display()
{ cout<<"M1:"<<m1<<endl;
  cout<<"M2:"<<m2<<endl;
}

  virtual void area()
{ cout<<"Area unknown\n";
}
};

class Rectangle : public Shape
{ double a;

public:

  void area()
{ cout<<"Area :"<<(m1*m2)<<endl;
}
};

class Triangle : public Shape
{ double a;

public:

  void area()
{ cout<<"Area :"<<(m1*m2*.5)<<endl;
}
};

int main()
{ Shape *a;

   a = new Rectangle;
   a->getData();
   a->area();

   a = new Triangle;
   a->getData();
   a->area();
}

  
  
