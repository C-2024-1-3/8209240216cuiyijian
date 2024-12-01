#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<double>& list) {
    bool changed = true;
    int listSize = list.size();

    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
        
        listSize--;
    } while (changed);
}
int main() {
    vector<double> numbers(10);

   
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; ++i) {
       cin >> numbers[i];
    }
    bubbleSort(numbers);
    cout << "排列后的数字是：" << endl;
    for (const double& num : numbers) {
       cout << num << " ";
    }
    cout << endl;

    return 0;
}