#include<iostream>
using namespace std;
int gcd(int a, int b);
int main() {
	int m, n;
	cout << "������������Ȼ��m��n��";
	cin >> m >> n;
	int result = gcd(m, n);
	cout << "���Լ���ǣ�" << result << endl;
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