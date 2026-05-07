#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;
    cin >> a >> b;
    cout << "SOMA = " << sum(a, b) << endl;
}