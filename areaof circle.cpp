#include <iostream>
using namespace std;

int main() {
    float r, d = 0, c = 0, a = 0;
    // r = radius of the circle
    // d = diameter of the circle
    // c = circumference of the circle
    // a = the area of the circle

    cout << "Enter the radius of the circle::\n";
    cin >> r;

    // It will calculate the diameter, circumference, and area of the circle
    d = 2 * r;
    c = 2 * 3.14 * r;
    a = 3.14 * (r * r);

    // It will produce the final output
    cout << "\n";
    cout << "Diameter      :: = " << d << " units\n";
    cout << "Circumference :: = " << c << " units\n";
    cout << "Area          :: = " << a << " sq. units\n";
    return 0;
}

// How to Find Area of a Circle with Diameter in C++ using Functions
#include <iostream>
using namespace std;

// This function will calculate the area of the circle
void CalculateArea(float x) {
    float d = 0, c = 0, a = 0;
    // d is the diameter of the circle
    // c is the circumference of the circle
    // a is the area of the circle

    // It will calculate the diameter, circumference, and area of the circle
    d = (2 * x);
    c = (2 * 3.14 * x);
    a = 3.14 * (x * x);

    // It will produce the final output
    cout << "\n";
    cout << "Diameter      :: = " << d << " units\n";
    cout << "Circumference :: = " << c << " units\n";
    cout << "Area          :: = " << a << " sq. units\n";
}

// It's the driver function
int main() {
    float r;  // radius of the circle

    cout << "Enter the radius of the circle::\n";
    cin >> r;

    CalculateArea(r);
    return 0;
}