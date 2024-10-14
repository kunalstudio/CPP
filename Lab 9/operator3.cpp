/*3. Define a class called Memory that contains data members called GB, MB and KB. 
Define default and parameterized constructors. Include a display() function to display the values of the
objects. Overload the ++, + and == operators as follows:
(i) obj1++ should increment the value of KB. After incrementing, if KB becomes &gt;1024 then
subtract the excess value from KB and add that to MB. If MB becomes &gt;1024 then subtract the
excess value from MB and add that to GB.
(ii) obj3=obj1+obj2 should add the GB, MB, and KB values of obj1 with obj2 and ensure that KB
and MB do not exceed 1024 by applying the procedure given under obj1++. Then an object
containing the result should be returned to main to assign to obj3.
(iii) If(obj1==obj2) compares GB, MB and KB of obj1 and obj2, returns true if they are equal
else returns false*/

#include<iostream>
using namespace std;

class Memory
{ int GB,MB,KB;

public :
Memory():GB(0),MB(0),KB(0)
{}

Memory(int a,int b,int c):GB(a),MB(b),KB(c)
{}

void get()
{ cout<<"Enter data in GB , MB and KB respectively:\n";
  cin>>GB>>MB>>KB;
}

void display()
{ cout<<endl<<"GB:"<<GB<<endl<<"MB:"<<MB<<endl<<"KB:"<<KB<<endl;
  
}

void operator ++()
{ if(KB>1024)
  { KB-=1024;
    MB++;
  }

  if(MB>1024)
  { MB-=1024;
    GB++;
  }
}

Memory operator +(Memory t)
{ Memory temp;
  temp.GB=GB+t.GB;
  temp.MB=MB+t.MB;
  temp.KB=KB+t.KB;
  return temp;
}

bool operator ==(Memory t)
{ if(GB==t.GB && MB==t.MB && KB==t.KB)
  return true ;
  else 
  false;
}
};

int main()
{ Memory m1,m2,m3;
  m1.get();
  m2.get();
  m3=m1+m2;
  ++m3;
  
  m3.display();
  
  if(m1==m2)
  cout<<"Equal Strings"<<endl;
  else
  cout<<"Not Equal"<<endl;
}


