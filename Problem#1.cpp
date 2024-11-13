#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m, theta, d;
    cin >> m >> theta >> d;

    // converting d(micrometer) into meter
    d = d / 1e6;
    // converting theta(degree) into radians
    theta = theta * 3.1416 / 180.0;

    // wavelength calculation
    double wavelength = (d * sin(theta)) / m;
    wavelength = wavelength * 1e9; // wavelength in meter

    cout << "Wavelength = " << wavelength << " nm" << endl;
    
    // color of the wavelength
    if(wavelength >= 380 && wavelength < 450) {
        cout << "Color of the light = Violet" << endl;
    }
    else if(wavelength >= 450 && wavelength < 485) {
        cout << "Color of the light = Blue" << endl;
    }
    else if(wavelength >= 485 && wavelength < 500) {
        cout << "Color of the light = Cyan" << endl;
    }
    else if(wavelength >= 500 && wavelength < 565) {
        cout << "Color of the light = Green" << endl;
    }
    else if(wavelength >= 565 && wavelength < 590) {
        cout << "Color of the light = Yellow" << endl;
    }
    else if(wavelength >= 590 && wavelength < 625) {
        cout << "Color of the light = Orange" << endl;
    }
    else if(wavelength >= 625 && wavelength <= 750) {
        cout << "Color of the light = Blue" << endl;
    }
    else {
        cout << "No visible light for this Wavelength" << endl;
    }
    
    return 0;
}
