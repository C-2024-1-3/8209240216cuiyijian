
#include <iostream>
#include "mytriangle.h"
#include <stdexcept> 
using namespace std;

int main() {
    double side1, side2, side3;

cout << "Enter the lengths of the three sides of the triangle: ";
cin >> side1 >> side2 >> side3;

    try {
        if (is_valid(side1, side2, side3)) {
            double area = triangle_area(side1, side2, side3);
    cout << "The area of the triangle is: " << area << endl;
        }
        else {
    cerr << "Error: The sides do not form a valid triangle." << endl;
        }
    }
    catch (const invalid_argument& e) {
      cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}