#include <iostream>
using namespace std;

// ����Point��
class Point {
private:
    int x, y; // ˽�б���������������ֵ

public:
    // ���캯������ʼ������ֵΪ(60, 80)
    Point() {
        x = 60;
        y = 80;
    }

    // ���г�Ա�����������޸�����ֵ
    void setPoint(int i, int j) {
        x = 60 + i; // ��x����ֵ�޸�Ϊ(60+i)
        y = 80 + j; // ��y����ֵ�޸�Ϊ(80+j)
    }

    // ���г�Ա�����������������ֵ
    void display() {
        cout << "��ǰ����Ϊ: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // ������󣬲����ù��캯����ʼ������ֵΪ(60, 80)
    Point p;

    // �����ʼ����ֵ
    cout << "��ʼ����Ϊ: ";
    p.display();

    // ����setPoint�����޸�����ֵΪ(60+5, 80+10)
    p.setPoint(5, 10);

    // ����޸ĺ������ֵ
    cout << "�޸ĺ������Ϊ: ";
    p.display();

    return 0;
}