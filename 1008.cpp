#include <iostream>
#include <iomanip>

using namespace std;

double salary(double hours, double price) {
    return hours * price;
}

int main(void) {
    double hours, price; int number;
    cin >> number >> hours >> price;
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << number << endl; 
    cout << "SALARY = U$ " << salary(hours, price) << endl;
}