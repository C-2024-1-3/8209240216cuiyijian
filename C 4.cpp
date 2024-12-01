#include "mytriangle.h"
#include <iostream>
#include <stdexcept>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	return(side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}
double triangle_area(double side1, double side2, double side3) {
	if (!is_valid(side1, side2, side3)) {
		throw invalid_argument("Invalid triangle sides");

	}
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side2));

}