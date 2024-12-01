#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; ++i) {
        int j;
        for (j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }

        if (j == len1) {
            return i;
        }
    }
    return -1;
}
int main() {
    const int MAX_LEN = 100;
    char s1[MAX_LEN];
    char s2[MAX_LEN];
    cout << "请输入第一个C字符串s1：";
    cin.getline(s1, MAX_LEN);
    cout << "请输入第二个C字符串s2：";
    cin.getline(s2, MAX_LEN);
    int index = indexOf(s1, s2);
    if (index != -1) {
        cout << "字符串s1是字符串s2的子串，起始下标为：" << index << endl;
    }
    else {
        cout << "字符串s1不是字符串s2的子串。" << endl;
    }
    return 0;
}