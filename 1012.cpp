#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

vector<double> forms(double a, double b, double c) {
    vector<double> formas(5);
    formas[0] = (a * c) / 2;
    formas[1] = 3.14159 * pow(c, 2);
    formas[2] = ((a + b) * c) / 2;
    formas[3] = b * b;
    formas[4] = a * b;

    return formas;
}

int main(void) {
    double a, b, c;
    cin >> a >> b >> c;

    vector<double> resultado = forms(a, b, c);

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << resultado[0] << endl;
    cout << "CIRCULO: " << resultado[1] << endl;
    cout << "TRAPEZIO: " << resultado[2] << endl;
    cout << "QUADRADO: " << resultado[3] << endl;
    cout << "RETANGULO: " << resultado[4] << endl;

}