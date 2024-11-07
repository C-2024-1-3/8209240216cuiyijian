#include <iostream>
#include <cmath> 
using namespace std;
double sqrt_iterative(double a) {
    if (a < 0) {
        cerr << "Error: Negative input. Returning -1." << endl;
        return -1;
    }

    double xn = a;
    double xn1;
    const double tolerance = 1e-5;

    do {
        xn1 = 0.5 * (xn + a / xn);
    } while (abs(xn1 - xn) >= tolerance);

    return xn1;
}

int main() {
    double a;
    cout << "Enter a value for a: ";
   cin >> a;

    double result = sqrt_iterative(a);
    if (result != -1) {
       cout << "The square root of " << a << " is approximately " << result << endl;
    }

    return 0;
}
