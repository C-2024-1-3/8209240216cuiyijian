#include <iostream>
#include <cstring>
void count(const char s[], int counts[]) {
    
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if ('a' <= c && c <= 'z') {
            counts[c - 'a']++;
        }
        else if ('A' <= c && c <= 'Z') {
            counts[c - 'A']++;
        }
    }
}
int main() {
    const int SIZE = 100;
    char str[SIZE];
    int counts[26];
    std::cout << "�������ַ���: ";
    std::cin.getline(str, SIZE); 
    count(str, counts);
    std::cout << "��ĸ���ִ���:" << std::endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            std::cout << char('a' + i) << ": " << counts[i] << std::endl;
        }
    }

    return 0;
}