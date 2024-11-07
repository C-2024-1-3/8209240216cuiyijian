#include<iostream>
using namespace std;
#define PI 3.1415926535897
int main()
{
	float r, h, V;
	cout << "输入圆锥底的半径" << endl;
	cin >> r;
	cout << "输入圆锥底的锥高" << endl;
	cin >> h;

	float S = PI * r * r;
	V = (1.0 / 3) * S * h;
	cout << "圆锥的体积为：" << V<< endl;
	return 0;
}
