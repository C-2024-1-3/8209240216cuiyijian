#include<iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int sec;

public:
	void input() {
		cout << "请输入时间（小时 分钟 秒）：" << endl;
		cin >> hour >> minute >> sec;

	}
	void output()const {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};

int main() {
	Time t1;
	t1.input();
	t1.output();
	return 0;
}
//hour、minute 和 sec被设定为私有
//input() 和 output()被设定为公用
//简单的成员函数最好放在类中定义
//成员函数的实现较为复杂，或者需要较多的代码逻辑最好在类外定义的函数