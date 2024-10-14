#include<iostream>
using namespace std;

class Matrix
{ int mat[10][10];

public:
void getMat(int n)
{ int i,j;
  cout<<"Enter the terms:\n";
  for(i=0;i<n;i++)
  { for(j=0;j<n;j++)
    { cout<<"x["<<i+1<<"]["<<j+1<<"]:";
      cin>>mat[i][j];
    }
  }
}

void diagonalSum(int n)
{ int sum=0,i;
  for(i=0;i<n;i++)
  { sum+=mat[i][i];
  }
  cout<<"Diagonal Sum:"<<sum<<endl;
}

void rowSum(int n)
{ int sum=0,i,j;
  for(i=0;i<n;i++)
  { sum=0;
    cout<<"Sum of row"<<i+1<<":";
    for(j=0;j<n;j++)
    { sum+=mat[i][j];
    }
    cout<<sum<<endl;
  }

}

void columnSum(int n)
{ int sum=0,i,j;
  for(j=0;j<n;j++)
  { sum=0;
    cout<<"Sum of column"<<j+1<<":";
    for(i=0;i<n;i++)
    { sum+=mat[i][j];
    }
    cout<<sum<<endl;
  }

}

};

int main()
{int n;
  cout<<"Enter number of terms:";
  cin>>n;
  Matrix m;
  m.getMat(n);
  m.diagonalSum(n);
  m.columnSum(n);
  m.rowSum(n);
  return 0;
}
