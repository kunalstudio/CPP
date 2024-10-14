#include <iostream>
#include <string>
using namespace std;

class ColorAddition {

    string color;

public:

    ColorAddition(string initialColor) : color(initialColor) {}


    ColorAddition operator+ (ColorAddition & other)
    {

        if (color == "Red" && other.color == "Green")
            return ColorAddition("Yellow");
        else if (color == "Red" && other.color == "Blue")
            return ColorAddition("Magenta");
        else if (color == "Blue" && other.color == "Red")
            return ColorAddition("Cyan");
        else
            return ColorAddition("Unknown");
    }


    string getColor() const {
        return color;
    }
};

int main() {

    ColorAddition red("Red");
    ColorAddition green("Green");
    ColorAddition blue("Blue");


    ColorAddition s1 = red + green;
    ColorAddition s2 = red + blue;
    ColorAddition s3 = blue + red;


    cout << "Red + Green = " << s1.getColor() << endl;
    cout << "Red + Blue = " << s2.getColor() << endl;
    cout << "Blue + Red = " << s3.getColor() << endl;

    return 0;
}
