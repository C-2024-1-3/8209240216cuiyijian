#include <iostream>
using namespace std;

int* f() {
    // ʹ��new�����䶯̬����
    int* list = new int[4] {1, 2, 3, 4};
    return list;  // ����ָ��̬�����ָ��
}

int main() {
    int* p = f();  // ��f�������ָ��
    cout << p[0] << endl;  // ���1
    cout << p[1] << endl;  // ���2

    delete[] p;  // �ͷŶ�̬����
    return 0;  // ����0��ʾ�ɹ�
}