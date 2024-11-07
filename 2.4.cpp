#include <iostream>
#include <limits>
using namespace std;
int main() {
    char op;
    double num1, num2;
    bool validOperation = true;

    cout << "请输入运算式（格式：a + b 或 a - b 或 a * b 或 a / b 或 a % b）：";
    cin >> num1 >> op >> num2;
    switch (op) {
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
       cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0。" << endl;
            validOperation = false;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "错误：除数不能为0。" << endl;
            validOperation = false;
        }
        else {
           
            int intNum1 = static_cast<int>(num1);
            int intNum2 = static_cast<int>(num2);
          cout << intNum1 << " % " << intNum2 << " = " << intNum1 % intNum2 << endl;
        }
        break;
    default:
        cout << "错误：非法运算符。" << endl;
        validOperation = false;
        break;
    }

    if (validOperation) {
        cout << "运算成功。" << endl;
    }
    else {
       cout << "运算失败。" << endl;
    }
    
    return 0;
}