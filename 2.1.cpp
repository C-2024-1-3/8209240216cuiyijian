
#include <iostream>
#include<cctype>
using namespace std;
int main()
{
    char inputChar;
    cout << "请输入一个字符：" << endl;
    cin >> inputChar;
        if (islower(inputChar))
        {
            char upperChar = toupper(inputChar);
            cout << "转换后的大写字母是：" << upperChar << endl;
        }
        else
        {
            char nextChar = inputChar ;
            cout << "后续字符的ASCII码值是:" << static_cast<int>(nextChar) << endl;
        }
        return 0;
}
