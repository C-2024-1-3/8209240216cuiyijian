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
	cout << " ��һ�����ժ��" << num << "�����ӡ�" << endl;
	return 0;


}