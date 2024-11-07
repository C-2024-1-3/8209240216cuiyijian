#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	//当将 unsigned int 转换为 char 时，由于 char 通常是一个 8 位的有符号类型（其范围通常是 -128 到 127，但这取决于编译器和字符集），
	// 65534（即二进制的 0xFFFE）会被截断为 8 位，并且因为 char 是有符号的，所以会被解释为负数。具体来说，0xFFFE 在 8 位有符号 char 中通常会被解释为 -2
	// （因为 FE 在二进制补码表示法中是 -2）。
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出

	system("pause");
	return 0;
}
