#include<iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int sec;

public:
	void input() {
		cout << "������ʱ�䣨Сʱ ���� �룩��" << endl;
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
//hour��minute �� sec���趨Ϊ˽��
//input() �� output()���趨Ϊ����
//�򵥵ĳ�Ա������÷������ж���
//��Ա������ʵ�ֽ�Ϊ���ӣ�������Ҫ�϶�Ĵ����߼���������ⶨ��ĺ���