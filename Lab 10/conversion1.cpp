Create classes MTime and RTime and perform the following operations to convert from basic
type to class type using operator overloading.
i. MTime class data members are hr,min,sec and meridian (AM or PM).
ii. MTime member functions are getTime(), showTime().
iii. RTime data members are hr,min,sec.
iv. RTime member functions are getTime(), showTime().
In main function create an object for the both classes and convert railway time (RTime) object in
meridian time(MTime) object and vice versa.

#include<iostream>
using namespace std;

class MTime
{ int hr,min,sec;
  
 

