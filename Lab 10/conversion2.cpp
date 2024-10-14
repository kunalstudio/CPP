/*Convert the class type to the basic type using operator overloading. The Distance class has
three conversion operators, allowing implicit conversion to double, int, and float. These operators
enable the easy conversion of a distance object to different units without explicitly calling
conversion functions. The main() function demonstrates how to use these conversion operators to
represent the distance in metres, centimeters, and kilometers.*/

#include<iostream>
using namespace std;

class Distance
{ int d;
public:

Distance():d(0)
{}
Distance(int v):d(v)
{}

operator double()
{ double a;
  a=d;
  return a;
}

operator float()
{ float a;
  a=d/100;
  d=d%100;
  return a;
}

operator int()
{ int a;
  a=d/10000;
  d=d%10000;
  return a;
}
};
int main()
{ double cm;
  float m;
  int km;
  Distance d(444444);
  km=d;
  m=d;
  cm=d;

  cout<<"Distance:"<<km<<"km\t"<<m<<"m\t"<<cm<<"cm\t";
}
