#include <iostream>
#include <iomanip>

using namespace std;

double circleArea(double pi, double r) {
    return pi * r * r;
}

int main(void) {
    double r, pi = 3.14159;
    cin >> r;
    cout << fixed << setprecision(4);
    cout << "A=" << circleArea(pi, r) << endl; 
}

