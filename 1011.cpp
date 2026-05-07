#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vol(double r, double pi) {
    return (4.0/3) * pi * pow(r, 3);
}

int main(void) {
    double r;
    const double pi = 3.14159;
    
    cin >> r;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << vol(r, pi) << endl;

}