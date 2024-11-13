#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m = 3, wavelength = 530, theta = 65.0, a;

    // converting the values to required unit
    wavelength = wavelength / 1e9; // from nanometer to meter
    theta = theta * 3.14416 / 180.0; // from degree to radians

    // a = slits width
    a = (m * wavelength ) / sin(theta);

    // calculation of theta for second order-order bright spot
    m = 2;
    wavelength = 700 / 1e9;
    double argument = m * wavelength / a; // asin value has to in the range of [-1, 1]
    if(argument >= -1 && argument <= 1) {
        theta = asin(argument); // theta in radians
        theta = (theta * 180.0) / 3.1416; // theta in degree
        cout << "Angle = " << theta << endl;
    }
    else {
        cout << "The value of asin is out of range[-1, 1]" << endl;
    }
    return 0;
}
