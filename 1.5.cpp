

#include <iostream>
using namespace std;
int main()
{
	double fahrenheit, celsius;
	cout << "请输入华氏温度：" << endl;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5.0 / 9.0;
	cout << "对应的摄氏温度是:" << celsius << endl;
	return 0;

}

