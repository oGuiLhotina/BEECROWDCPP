#include <iostream>

using namespace std;

int PROD(int a, int b) {
    return a * b;
}

int main(void) {
    int a, b;
    cin >> a >> b;
    cout << "PROD = " << PROD(a, b) << endl;
}