#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

double salary(double salary, double value) {
    return salary + value * .15;
}

int main(void) {
    string name; double sal, value;

    cin >> name >> sal >> value;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary(sal, value) << endl;

}   