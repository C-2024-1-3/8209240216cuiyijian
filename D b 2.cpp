#include <iostream>
#include <cstring>
#include <cstdlib> // for atof
using namespace std;

// (1) 检查字符串s1是否为字符串s2的子串
int indexof(const char* s1, const char* s2) {
    const char* pos = strstr(s2, s1);
    return (pos) ? pos - s2 : -1;
}

// (2) 将以字符串形式表示的16进制数转换为10进制数
int parseHex(const char* const hexString) {
    return (int)strtol(hexString, nullptr, 16); // 使用strtol来转换
}

// (3) 动态数组的创建、排序和释放内存
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // 交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // (1) 字符串子串检查
    const char* s1 = "hello";
    const char* s2 = "hello world";
    int index = indexof(s1, s2);
    cout << "Index of substring: " << index << endl;

    // (2) 16进制转换
    const char* hexStr = "A5";
    int decimalValue = parseHex(hexStr);
    cout << "Decimal value of hex " << hexStr << " is: " << decimalValue << endl;

    // (3) 动态数组
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // 创建动态数组
    int* arr = new int[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // 排序数组
    sortArray(arr, n);

    // 输出数组元素
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 释放数组内存
    delete[] arr;

    return 0;
}