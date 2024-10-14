#include<iostream>
using namespace std;

int secondlargest(int [],int);
int smallest(int [],int);

int main()
{ int n,i;
  cout <<"Enter number of terms:";
  cin>>n;
  
  int x[n];

  cout<<"Enter the terms in array:\n";

  for(i=0;i<n;i++)
  {  cout<<"X["<<i+1<<"]:";
     cin>>x[i];
  }
cout<<"Second largest term:"<<secondlargest(x,n)<<"\n";
cout<<"Smallest term:"<<smallest(x,n)<<"\n";
}

int smallest(int a[],int b)
{ int min,i;
  min=a[0];

  for(i=0;i<b;i++)
  { if(min>a[i])
     min=a[i];
  }
  
 return min;
}

int secondlargest(int a[],int b)
{ int m,max,i,j,c[b-1];
  m=a[0];

  for(i=0;i<b;i++)
  { if(m<a[i])
     m=a[i];
  }
 j=0;
 for(i=0;i<b;i++)
  { if(a[i]!=m)
    {c[j]=a[i];
    j++;
    }
  }
 max=c[0];

  for(i=0;i<(b-1);i++)
  { if(max<c[i])
     max=c[i];
  }
return max;
}

     
    
     
    



