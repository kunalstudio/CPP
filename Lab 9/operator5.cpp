#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int a[10][10];
    int rows;
    int columns;

public:

    Matrix(int numRows, int numCols) : rows(numRows), columns(numCols)
    {}


    void input() {
        cout << "Enter matrix values:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }
    }


    void output()  {
        cout << "Matrix values:" << endl;
       for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }


    Matrix operator+=( Matrix other) {
        if (rows == other.rows && columns == other.columns) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < columns; ++j) {
                    a[i][j] += other.a[i][j];
                }
            }
        }

    }


    bool operator==( Matrix& other)
    {int n=0,i=0,j=0;
     for (int i = 0; i < rows; ++i)
    {
                for (int j = 0; j < columns; ++j)
                { if(a[i][j]!=other.a[i][j])
                  n++;

                }
    }
    if(n==0)
    return true;
    else
    return false;}
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    Matrix matrix1(rows, cols);
    matrix1.input();

    Matrix matrix2(rows, cols);
    matrix2.input();


    Matrix result = matrix1;
    result += matrix2;


    cout << "\nMatrix 1:" << endl;
    matrix1.output();
    cout << "\nMatrix 2:" << endl;
    matrix2.output();
    cout << "\nMatrix 1 + Matrix 2:" << endl;
    result.output();


    if (matrix1 == matrix2) {
        cout << "\nMatrix 1 is equal to Matrix 2." << endl;
    } else {
        cout << "\nMatrix 1 is not equal to Matrix 2." << endl;
    }

    return 0;
}

