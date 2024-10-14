/*Create a class Ball with data member diameter and member function getdata() and virtual
function display(). Derive foot_ball class and cricket_ball class from Ball class. Get the user
option for the type of ball and based on the input, call the foot or cricket class to get the
input and display () the Volume of football or cricket ball. Repeat the process based on user
option. Volume of sphere: (4/3) *3.14*r*r*r */

#include<iostream>
using namespace std;
#include<string>

class Ball
{ protected:
  
  double d;

  public:

  void getData()
  { cout<<"Enter the diameter of Ball :\n";
    cin>>d;
  }

  virtual void display()
  { cout<<"Volume of Ball is unknown\n";
  }

  double getD()
  { return d;}
};

class foot_ball : public Ball
{ void display()
  {
  cout<<"Volume of FootBall :"<<((4/3)*(d/2)*(d/2)*(d/2))<<endl;
  }
};


class cricket_ball : public Ball
{ void display()
  {
  cout<<"Volume of Cricket Ball :"<<((4/3)*(d/2)*(d/2)*(d/2))<<endl;
  }
};

int main()
{ string s1,s2("cricket");
 cout<<"Enter type of the Ball (cricket/football) :\n";
 cin>>s1;

 if(s1==s2)
 { Ball *b;
   b = new cricket_ball ;
   b->getData();
   b->display();
 }
  else
 { Ball *b;
   b = new foot_ball ;
   b->getData();
   b->display();
 }
}
  
  
  


