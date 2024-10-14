/*Write a program that calculates the average of up to ‘n’ English distances input by the user.
Create an array of objects of the Distance class with the data members as feets and inches to
calculate the average create a member function called avgDistance(). (Hint: 12 inches = 1 Feet)*/
#include<iostream>
using namespace std;

class D
{ int feet;
  int inch;
public:

void get()
{cout<<"Enter distance in feet and inch:\n";
 cin>>feet>>inch;
}

void put()
{cout<<"Feet:"<<feet<<endl<<"Inch:"<<inch<<endl;
}

void avgDistance(D o[],int n)
{ D t; 
int avg=0,i;

 for(i=0;i<n;i++)
{ avg+=((o[i].feet*12)+(o[i].inch));
}

avg=avg/n;
feet=avg/12;
inch=avg%12;

}
};

int main()
{ int n,i;
cout<<"Enter the number of terms:";
cin>>n;
D d[n];
for(i=0;i<n;i++)
{ d[i].get();
}
D s;
s.avgDistance(d,n);
s.put();
}
