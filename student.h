#include<iostream>
using namespace std;
class Student              //������
{
private:
	int num;
	const char* name;
	char sex;
public:                   //���ó�Ա����ԭ������
	Student(int n = 0, const char* p = NULL, char s = '/0')
	{
		num = n;
		name = p;
		sex = s;
	}
	void display();
	void set_value(int n, const char* p, const char s)
	{
		num = n;
		name = p;
		sex = s;
	}
}; 
