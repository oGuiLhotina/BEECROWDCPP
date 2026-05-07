#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main (void) {
    int a, b;
    cin >> a >> b;
    cout << "X = "<< sum(a, b) << endl;
}