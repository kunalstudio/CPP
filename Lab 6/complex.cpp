/*Write a C++ program to create a class called Complex to implement the following functions on
Complex type objects with real and imaginary parts of components. READ/INPUT, ADD,
SUBTRACT, MULTIPLY and PRINT with return the resultant object. Write the program with
required constructors, member functions with necessary arguments and return types.*/
#include<iostream>
using namespace std;

class Complex 
{ int r,i;
  public :
  Complex()
  { r=0;
    i=0;
  }
  
  Complex(int x,int y)
  { r=x;
    i=y;
  }

  void get()
  { cout<<"Enter the real and imaginary part of complex number:"<<endl;
    cin>>r>>i;
  }
  
  Complex add(Complex &o)
  { Complex o1;
    o1.r=r+o.r;
    o1.i=i+o.i;
  return o1;
  }
  
   Complex sub(Complex &s)
  { Complex s1;
    s1.r=r-s.r;
    s1.i=i-s.i;
  return s1;
  }
 
  Complex mul(Complex &t)
  { Complex t1;
    t1.r=(r*t.r)-(i*t.i);
    t1.i=(i*t.r)+(t.i*r);
   return t1;
  }
 
  void put()
 { cout<<"Real term:"<<r<<endl;
   cout<<"Imaginary term:"<<i<<endl<<endl;
 }
};

int main()
{ Complex c1,c2(5,7),c3,c4,c5;
  c1.get();
  
  c3=c1.add(c2);
  c4=c1.sub(c2);
  c5=c1.mul(c2);
  c3.put();
  c4.put();
  c5.put();
 
}

