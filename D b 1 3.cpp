#include <iostream>
using namespace std;

void f(char* st, int i) {
    st[i] = '\0';
    cout << st << endl;
    if (i > 1) {
        f(st, i - 1);
    }
}

int main() {
    char st[] = "abcd";
    f(st, 3); // ע������Ӧ����3����Ϊ�����±��0��ʼ
    return 0;
}