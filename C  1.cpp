#include<iostream>
using namespace std;
int gcd(int a, int b);
int main() {
	int m, n;
	cout << "请输入两个自然数m和n：";
	cin >> m >> n;
	int result = gcd(m, n);
	cout << "最大公约数是：" << result << endl;
	return 0;
}
int gcd(int a, int b){
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;

	}
	return a;
}