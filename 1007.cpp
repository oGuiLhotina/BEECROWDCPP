#include <iostream>

using namespace std;

int diff(int a, int b, int c, int d) {
    return a * b - c * d;
}

int main (void) {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << diff(a,b,c,d) << endl;
}