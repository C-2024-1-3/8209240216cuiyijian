#include <iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputDimensions() {
		cout << "�����볤�����ĳ������� (�Կո�ָ�): ";
		cin >> length >> width >> height;


	}

	double calculateVolume() const {
		return length * width * height;
	}


};
int main() {
    Cuboid cuboids[3];  // ���� 3 ������������

    // ����3���������ĳ�������
    for (int i = 0; i < 3; i++) {
        cout << "�����" << (i + 1) << "���������ĳߴ�:" << endl;
        cuboids[i].inputDimensions();
    }

    // ���3�������������
    for (int i = 0; i < 3; i++) {
        cout << "��" << (i + 1) << "�������������: " << cuboids[i].calculateVolume() << endl;
    }

    return 0;
}