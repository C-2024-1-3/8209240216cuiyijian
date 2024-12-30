#include <iostream>
using namespace std;

// 定义学生结构体
struct Student {
    int id;    // 学号
    float score;  // 成绩
};

// max函数，找出最高成绩的学生
void max(Student* students, int size) {
    Student* highest = students;  // 假设第一个学生是成绩最高的

    for (int i = 1; i < size; i++) {
        if (students[i].score > highest->score) {
            highest = &students[i];  // 更新最高成绩学生
        }
    }

    cout << "最高成绩的学生学号是: " << highest->id << endl;
}

int main() {
    // 创建一个包含5个学生的数组
    Student students[5] = {
        {1, 85.5},
        {2, 92.0},
        {3, 78.5},
        {4, 90.0},
        {5, 88.0}
    };

    // 调用max函数，传入学生数组和数组大小
    max(students, 5);

    return 0;
}