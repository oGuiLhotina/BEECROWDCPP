#include <iostream>
#include <iomanip>

using namespace std;

double AVERAGE(double a, double b) {
    return (a * 3.5 + b * 7.5) / 11;
}

int main(void) {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << AVERAGE(a, b) << endl;
}