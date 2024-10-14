/*Create two classes IntArray to store the set of integer numbers and FloatArray to store
decimal numbers. Add a member function read () for both classes for reading inputs. Create
two objects ‘x’ for IntArray and ‘y’ for FloatArray. Read the inputs for x and y. Using a friend
function maxmin(x,y), display the maximum and minimum among the set of integers and
decimal numbers */

#include<iostream>
using namespace std;
class FloatArray;
class IntArray
{
  double x[10];

public:
  void read()
  { cout<<"Enter integer values :\n";
    for(int i=0;i<5;i++)
    cin>>x[i];
  }
 friend void maxmin(IntArray,FloatArray);
};

class FloatArray
{
  double y[10];
  
public:
  void read()
  { cout<<"Enter decimal values :\n";
    for(int i=0;i<5;i++)
    cin>>y[i];
  }

 friend void maxmin(IntArray,FloatArray);
};

void maxmin(IntArray a,FloatArray b)
{ double max=0,min=0;
   max=a.x[0];
   for( int i=0;i<5;i++)
   { if(max<a.x[i])
      max=a.x[i];
   }
   
   min=a.x[0];
   for( int i=0;i<5;i++)
   { if(min>a.x[i])
      min=a.x[i];
   }
  
   cout<<"Maximum value of integer:"<<max<<endl<<"Minimum value of integer:"<<min<<endl;

   max=0;
   min=0;

   max=b.y[0];
   for( int i=0;i<5;i++)
   { if(max<b.y[i])
      max=b.y[i];
   }
   
   min=b.y[0];
   for( int i=0;i<5;i++)
   { if(min>b.y[i])
      min=b.y[i];
   }
  
   cout<<"Maximum value of decimal:"<<max<<endl<<"Minimum value of decimal:"<<min<<endl;
}

int main()
{ IntArray p;
  p.read();
  FloatArray q;
  q.read();

  maxmin(p,q);
}
  

