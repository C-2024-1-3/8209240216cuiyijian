#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    int uniqueCount = 0;

    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;


        bool isUnique = true;
        for (int j = 0; j < uniqueCount; ++j) {
            if (numbers[j] == num) {
                isUnique = false;
                break;
            }
        }


        if (isUnique) {
            numbers[uniqueCount] = num;
            ++uniqueCount;
        }
    }


    cout << "��ͬ�����ǣ�" << endl;
    for (int i = 0; i < uniqueCount; ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}