#include<iostream>
#include<cmath>
using namespace std;

class Polar {
    float r, th;
public:
    Polar() : r(0), th(0) {}
    Polar(float v1, float v2) : r(v1), th(v2) {}

    void get() {
        cout << "Enter radius and angle:\n";
        cin >> r >> th;
    }

    void show() {
        cout << "Radius: " << r << endl << "Angle: " << th << " degrees" << endl;
    }

    float gr() { return r; }
    float gt() { return th; }
};

class Rectangle {
    float x, y;
public:
    Rectangle() : x(0), y(0) {}
    Rectangle(float v1, float v2) : x(v1), y(v2) {}

    Rectangle(Polar t) {
        x = t.gr() * cos(t.gt() * M_PI / 180);
        y = t.gr() * sin(t.gt() * M_PI / 180);
    }

    void show() {
        cout << "X coordinate: " << x << endl << "Y coordinate: " << y << endl;
    }

    operator Polar() {
        return Polar(sqrt(x * x + y * y), atan2(y, x) * 180 / M_PI);
    }
};

int main() {
    Polar p1(5, 60), p2;
    Rectangle r1;

    r1 = p1;
    p2 = r1;
    r1.show();
    p2.show();
}
