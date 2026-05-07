#include <iostream>
#include <iomanip>

using namespace std;

double average(double a, double b, double c) {
    return (a * 2 + b * 3 + c * 5) / 10;
}

int main(void) {
    double a, b, c; 
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << average(a,b,c) << endl;
    
}