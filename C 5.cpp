#include<iostream>
using namespace std;
int pea(int day) {
	if (day == 10) {
		return 1;

	}
	else {
		return(pea(day + 1) + 1) * 2;
			
	}
	

}
int main() {

	int day = 1;
	int num = pea(day);
	cout << " 第一天猴子摘了" << num << "个桃子。" << endl;
	return 0;


}