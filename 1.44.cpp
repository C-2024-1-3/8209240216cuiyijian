#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUnint = 65534; // 0xFFFE

    // 原始代码
    cout << "output in unsigned int type:" << testUnint << endl;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl; // 为什么结果为-2?:
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type (precision 4):" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl; // 16进制输出

    // 按八进制输出
    cout << "output in Octal unsigned int type:" << oct << testUnint << endl; // 8进制输出

    // 将一个实数转换为int
    double realNumber = 123.456;
    int intFromReal = static_cast<int>(realNumber);
    cout << "output in int type from double:" << intFromReal << endl;

    system("pause");
    return 0;
}