#include <iostream>
using namespace std;

class Height
{
    int feet;
    int inch;

public:
    Height()
    {feet=0;
     inch=0;
    }
    Height(int x, int y)
    {
        feet = x;
        inch = y;
    }

    void read()
    {
        cout << "Enter height in feet and inches:\n";
        cin >> feet >> inch;
    }

    void maximum(Height o[], int n)
    {
        int max = (12*o[0].feet + o[0].inch);
        for (int i = 0; i < n; i++)
        {
            if (max < (12*o[i].feet + o[i].inch))
                max = (12*o[i].feet + o[i].inch);
        }
        feet = max / 12;
        inch = max % 12;
    }

    void minimum(Height o[], int n)
    {
        int min = (12*o[0].feet + o[0].inch);
        for (int i = 0; i < n; i++)
        {
            if (min > (12*o[i].feet + o[i].inch))
                min = (12*o[i].feet + o[i].inch);
        }
        feet = min / 12;
        inch = min % 12;
    }

    void average(Height o[], int n)
    {
        int avg = 0;
        for (int i = 0; i < n; i++)
        {
            avg += (12*o[i].feet + o[i].inch);
        }
        avg = avg / n;
        feet = avg / 12;
        inch = avg % 12;
    }

    void show()
    {
        cout << "Feet: " << feet << endl
             << "Inch: " << inch << endl
             << endl;
    }
};

int main()
{
    int n, i;
    cout << "Enter number of terms: ";
    cin >> n;
    Height t[10];
    for (i = 0; i < n; i++)
    {
        t[i].read();
    }
    Height s1, s2, s3;
    s1.maximum(t, n);
    s2.minimum(t, n);
    s3.average(t, n);

    cout << "Maximum distance: ";
    s1.show();
    cout << "Minimum distance: ";
    s2.show();
    cout << "Average Distance: ";
    s3.show();

    return 0;
}
