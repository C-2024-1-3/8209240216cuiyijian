#include <iostream>
using namespace std;
// 函数声明
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;

    // 输入两个正整数
    cout << "请输入两个正整数 a 和 b: ";
  cin >> a >> b;

    // 计算最大公约数和最小公倍数
    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    // 输出结果
  cout << "最大公约数: " << gcdResult << endl;
    cout << "最小公倍数: " << lcmResult << endl;

    return 0;
}

// 计算最大公约数的函数（欧几里得算法）
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数的函数
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}