#include <iostream>
using namespace std;
void calculateGCDAndLCM(int a, int b, int& gcd, int& lcm);
int main() {
	int m, n;
	int gcd, lcm;
	cout << "请输入两个自然数m和n:";
	cin >> m >> n;
	calculateGCDAndLCM(m, n, gcd, lcm);
	cout << "最大公约数是：" << gcd << endl;
	cout << "最小公倍数是：" << lcm << endl;

	return 0;
}
void calculateGCDAndLCM(int a, int b, int& gcd, int& lcm) {
	int temp_a = a, temp_b = b;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	lcm = (temp_a / gcd) * temp_b;


}
