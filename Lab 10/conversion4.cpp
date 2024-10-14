/*Create a class for polar coordinates (radius and angle). Incorporate an overloaded +operator for
the addition of two polar quantities. “Adding” two points on the plain can be accomplished by
adding their x coordinates and then adding their y coordinates. Display these points in Cartesian
coordinates (x and y) and include methods for converting between polar and Cartesian
coordinates using data conversion technique. Convert it to Cartesian coordinates, display the
polar coordinates, and then convert the Cartesian coordinates back to polar coordinates and
display the result.*/

#include<iostream>
#include<math.h>
using namespace std;

class Polar 
{ float r,th;
public:

Polar():r(0),th(0)
{}

Polar(float v1,float v2):r(v1),th(v2)
{}

void get()
{ cout<<"Enter radius and angle:\n";
  cin>>r>>th;
}

void show()
{ cout<<"Radius:"<<r<<endl<<"Angle:"<<th<<endl;
}

float gr()
{ return r;}
float gt()
{ return th;}
};

class Rectangle
{ float x,y;
public:

Rectangle():x(0),y(0)
{}

Rectangle(float v1,float v2):x(v1),y(v2)
{}

Rectangle(Polar t)
{ x=t.gr()*cos(t.gt());
  y=t.gr()*sin(t.gt());
}

void show()
{ cout<<"X coordinate:"<<x<<endl<<"Y coordinate:"<<y<<endl;
}

operator Polar()
{ /*Polar t;
  t.gr()=sqrt(x*x+y*y);
  t.gt()=atan(y/x);*/
  return Polar(sqrt(x*x+y*y),atan(y/x));
}
};

int main()
{ Polar p1(5,60),p2(13,30);
  Rectangle r1,r2;

  r1=p1;
  r2=p2;
  r1.show();
}
  
 


