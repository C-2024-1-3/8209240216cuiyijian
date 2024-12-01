#include <iostream>
using namespace std;

int* f() {
    // 使用new来分配动态数组
    int* list = new int[4] {1, 2, 3, 4};
    return list;  // 返回指向动态数组的指针
}

int main() {
    int* p = f();  // 从f函数获得指针
    cout << p[0] << endl;  // 输出1
    cout << p[1] << endl;  // 输出2

    delete[] p;  // 释放动态数组
    return 0;  // 返回0表示成功
}