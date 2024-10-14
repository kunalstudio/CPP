#include<iostream>
#include<string>
using namespace std;

class MTime
{ int hr,min,sec;
  string m;
public :

MTime():hr(0),min(0),sec(0),m("AM")
{}
MTime(int a,int b ,int c,string d):hr(a),min(b),sec(c),m(d)
{}

void getTime()
{ cout<<"Enter time in hour, minutes and seconds:\n";
  cin>>hr>>min>>sec;
  cout<<"Enter meridian(AM/PM):\n";
  cin>>m;
}

void showTime()
{ cout<<"MTime: "<<hr<<"hours "<<min<<"minutes "<<sec<<"seconds ";
  cout<<" Meridian:"<<m<<endl;
}

int ghr()
{return hr;
}

int gmin()
{return min;
}

int gsec()
{return sec;
}

string gm()
{return m;
}
};

class RTime
{ int hr,min,sec;
public:

RTime():hr(0),min(0),sec(0)
{}
RTime(int a,int b ,int c):hr(a),min(b),sec(c)
{}

RTime(MTime t)
{ if(t.gm()=="AM")
  { hr=t.ghr();
    min=t.gmin();
    sec=t.gsec();
  }
  else
  { hr=(t.ghr()+12);
    min=t.gmin();
    sec=t.gsec();
  }
}

void getTime()
{ cout<<"Enter time in hour, minutes and seconds:\n";
  cin>>hr>>min>>sec;
}

void showTime()
{ cout<<"RTime: "<<hr<<"hours "<<min<<"minutes "<<sec<<"seconds "<<endl;
}

operator MTime()
{ MTime t;
  if(hr>=12)
  return MTime(hr-12,min,sec,"PM");

  else
  return MTime(hr,min,sec,"AM");
}
};

int main()
{ RTime r1(19,24,24),r2;
  MTime m1;

  m1=r1;
  r2=m1;

  m1.showTime();
  r2.showTime();
}
