#include <iostream>
using namespace std;

// ����ѧ���ṹ��
struct Student {
    int id;    // ѧ��
    float score;  // �ɼ�
};

// max�������ҳ���߳ɼ���ѧ��
void max(Student* students, int size) {
    Student* highest = students;  // �����һ��ѧ���ǳɼ���ߵ�

    for (int i = 1; i < size; i++) {
        if (students[i].score > highest->score) {
            highest = &students[i];  // ������߳ɼ�ѧ��
        }
    }

    cout << "��߳ɼ���ѧ��ѧ����: " << highest->id << endl;
}

int main() {
    // ����һ������5��ѧ��������
    Student students[5] = {
        {1, 85.5},
        {2, 92.0},
        {3, 78.5},
        {4, 90.0},
        {5, 88.0}
    };

    // ����max����������ѧ������������С
    max(students, 5);

    return 0;
}