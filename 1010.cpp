#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

double totalValue(int units1, int units2, double price1, double price2) {
    return (units1 * price1) + (units2 * price2);
}

int main (void) {
    int code1, units1, code2, units2;
    double price1, price2;

    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << totalValue(units1, units2, price1, price2) << endl;
}