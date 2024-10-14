/*Write a C++ program to create a class called Fraction to implement the following functions on
fraction type objects with numerator and denominator parts of components. READ/INPUT, ADD,
SUBTRACT, MULTIPLY and PRINT with return the resultant object. Write the program with
required constructors, member functions with necessary arguments and return types.*/
#include<iostream>
using namespace std;

class fraction 
{ int n,d;
public:

fraction()
{ n=0;
  d=0;
}

fraction(int x,int y)
{n=x;
 d=y;
}

void get()
{ cout<<"Enter Numerator and Denominator:"<<endl;
  cin>>n>>d;
}

fraction add( fraction &p)
{ fraction p1;
  if(d==p.d)
  { p1.d=d;
    p1.n=p.n+n;
  }

  else
  { p1.d=(d*p.d);
    p1.n=(n*p.d)+(d*p.n);
  }
  return p1;
}

fraction sub( fraction &q)
{ fraction q1;
  if(d==q.d)
  { q1.d=d;
    q1.n=q.n-n;
  }

  else
  { q1.d=(d*q.d);
    q1.n=(n*q.d)-(d*q.n);
  }
  return q1;
}

fraction mul(fraction &r)
{ fraction r1;
  r1.n=n*r.n;
  r1.d=d*r.d;
return r1;
}

void put()
{ cout<<"Numerator:"<<n<<endl<<"Denominator:"<<d<<endl<<endl;
}
};

int main()
{ fraction f1(5,7),f2,f3,f4,f5;
  f2.get();
  
  f3=f1.add(f2);
  f4=f1.sub(f2);
  f5=f1.mul(f2);
  f3.put();
  f4.put();
  f5.put();
}



