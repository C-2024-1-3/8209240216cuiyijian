#include <iostream>
#include <cstring>
#include <cstdlib> // for atof
using namespace std;

// (1) ����ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ�
int indexof(const char* s1, const char* s2) {
    const char* pos = strstr(s2, s1);
    return (pos) ? pos - s2 : -1;
}

// (2) �����ַ�����ʽ��ʾ��16������ת��Ϊ10������
int parseHex(const char* const hexString) {
    return (int)strtol(hexString, nullptr, 16); // ʹ��strtol��ת��
}

// (3) ��̬����Ĵ�����������ͷ��ڴ�
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // ����
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // (1) �ַ����Ӵ����
    const char* s1 = "hello";
    const char* s2 = "hello world";
    int index = indexof(s1, s2);
    cout << "Index of substring: " << index << endl;

    // (2) 16����ת��
    const char* hexStr = "A5";
    int decimalValue = parseHex(hexStr);
    cout << "Decimal value of hex " << hexStr << " is: " << decimalValue << endl;

    // (3) ��̬����
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // ������̬����
    int* arr = new int[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // ��������
    sortArray(arr, n);

    // �������Ԫ��
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // �ͷ������ڴ�
    delete[] arr;

    return 0;
}