#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double x, y;
	cout << fixed << setprecision(2);
	double values[] = { 0.2,1.0,5.0,0.0 };
	for (double value : values)
	{
		x = value;
		if (0 < x && x < 1) {
			y = 3 - 2 * x;
		}
		else if (1 <= x && x < 5) {
			y = 0.5 * x + 1;
		}
		else if (5 <= x && x < 10) {
			y = x * x;
		}
		else {
			y = 0;
			cout << "x=" << x << "不在定义的范围内，y设置为默认值0" << endl;
			continue;
		}

		cout << "x=" << x << "y=" << y << endl;


	}

	return 0;

}