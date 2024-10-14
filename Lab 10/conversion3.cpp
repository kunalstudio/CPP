/* Create two classes, TemperatureCelsius and TemperatureFahrenheit, each representing
temperatures in Celsius and Fahrenheit, respectively. The data member type should be a float, and
member functions should be getTemp() and showTemp(). Perform data conversion with one class
type into another class type for converting temperatures between these two units.*/

#include<iostream>
using namespace std;

class Celsius
{ float c;
public:

Celsius():c(0)
{}
Celsius(float v):c(v)
{}
void getTemp()
{ cout<<"Enter temperature in celsius:";
  cin>>c;
}
void showTemp()
{ cout << c <<endl;
}
float get()
{ return c;
}
};

class Fahren
{ float f;
public:

Fahren():f(0)
{}
Fahren(float v):f(v)
{}
Fahren(Celsius t)// constructor 
{ f=(9*t.get()/5)+32;
}

void getTemp()
{ cout<<"Enter temperature in Fahrenheit:";
  cin>>f;
}
void showTemp()
{ cout << f << endl;
}
operator Celsius() //operator cast function 
{ return ((f-32)*5/9);
}
};


int main()
{ Fahren f1(98.6),f2;
  Celsius c1(37),c2;
  //f1.getTemp();
  //c1.getTemp();
  f2=c1;
  c2=f1;
  //c1.showTemp();
  c2.showTemp();
  //f1.showTemp();
  f2.showTemp();

}




