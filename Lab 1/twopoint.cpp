#include<iostream>
#include<math.h>
using namespace std;

int main()
{ int x1,x2,y1,y2,d;
  cout<<"Enter the x and y coordinate of point one respectively:\n";
  cin>>x1;
  cin>>y1;
  cout<<"Enter the x and y coordinate of point two respectively:\n";
  cin>>x2;
  cin>>y2;
    
  d=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
 cout<<"Distance between two point is "<<d<<"\n";
}
