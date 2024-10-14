/*Create a class called POINT with two data members X and Y. Include the no-argument constructor
to assign the initial value as 0 to X and Y. Parameterized constructor can be used to assign the fixed
initial values to X and Y.
• READ() member function gets the input for X and Y from the user and DISPLAY( ) member
function is used to print X and Y values.
• FIND_DISTANCE() member function can be used to calculate the distance between the invoking
object and argument POINT object (*Euclidean distance=√(x2 − x1) 2 + (y2 − y1)2)
• Another member function called CENTROID () calculates centroid value by receiving three POINT
objects as arguments and stores the result in invoking object (*Centroid
G(X,Y)=((x1+x2+x3)/3, (y1+y2+y3)/3)
In main function, declare the required objects to invoke the POINT class member functions.*/

#include<iostream>
#include<math.h>
using namespace std;

class point 
{ double x,y;
 
public:
point()
{ x=0;
  y=0;
}

point(int a,int b)
{ x=a;
  y=b;
}

void read()
{ cout<<"Enter x and y coordinate:"<<endl;
  cin>>x>>y;
}

void display()
{ cout<<"X coordinate:"<<x<<endl<<"Y coordinate:"<<y<<endl;
}

void find_distance(point &m,point &n)
{ double d ;
  d=sqrt(pow(m.x-n.x,2)+pow(m.y-n.y,2));
  cout<<"Distance:"<<d<<endl<<endl;
}

 void centroid(point &m,point &n,point &o)
{ x=(m.x+n.x+o.x)/3;
  y=(m.y+n.y+o.y)/3;
}

};

int main()
{ point p1,p2(4,3),p3;
  p1.read();
  p3.find_distance(p1,p2);

  point p4;
  p3.read();

  p4.centroid(p1,p2,p3);
  p4.display();
}


