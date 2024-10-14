/*1. Create a Point class with the data members X_Coordinate (int), Y_Coordinate (int), and the
following member functions.
(i) constructor with default arguments - to initialize the data members
(ii) getCoordinate() -to get the coordinate values
(iii) Unary “-” operator function- to find the distance between a Point and origin
(iv) Binary “-” operator function- to find the distance between two Points.
Create two objects for the Point class in the main function. Initialize one object through the
constructor and the other through getCoordinate (). Determine the distance between two points as
well as the distance between a point and the origin.*/


#include<iostream>
#include<math.h>
using namespace std;

class Point 
{ int x;
  int y;
public:

 Point():x(4),y(3)
 {}

 Point(int a,int b):x(a),y(b)
 {}

 void getCoordinate()
 { cout<<"Enter x and y coordinates respectively:\n";
   cin>>x>>y;
 }

 int operator -()
 { int d;
   d = sqrt( x*x+y*y) ;
   //cout<<"Distance of point from origin:"<<d;
   return d;
 }

 int operator -(Point &t)
 { Point temp;
   int d;
   d = sqrt( pow(x-t.x,2) + pow(y-t.y,2));
   return d;
 }

 void put()
 { cout<<"X Coordinate:"<<x<<endl<<"Y Coordinate:"<<y<<endl;
 }
};

int main()
{ Point p1,p2;
  p1.getCoordinate();

  p1.put();
  p2.put();
  int a,b,c;
  a=-p1;
  b=p1-p2;
  cout<<"Distance of point from origin:"<<a<<endl<<"Distance between two points:"<<b<<endl;
}

