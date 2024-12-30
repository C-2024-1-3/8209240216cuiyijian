#include <iostream>
using namespace std;

// 定义Point类
class Point {
private:
    int x, y; // 私有变量，代表点的坐标值

public:
    // 构造函数，初始化坐标值为(60, 80)
    Point() {
        x = 60;
        y = 80;
    }

    // 公有成员函数，用于修改坐标值
    void setPoint(int i, int j) {
        x = 60 + i; // 将x坐标值修改为(60+i)
        y = 80 + j; // 将y坐标值修改为(80+j)
    }

    // 公有成员函数，用于输出坐标值
    void display() {
        cout << "当前坐标为: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 定义对象，并利用构造函数初始化坐标值为(60, 80)
    Point p;

    // 输出初始坐标值
    cout << "初始坐标为: ";
    p.display();

    // 利用setPoint函数修改坐标值为(60+5, 80+10)
    p.setPoint(5, 10);

    // 输出修改后的坐标值
    cout << "修改后的坐标为: ";
    p.display();

    return 0;
}