#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student studl(007, "tcg", 'm');
	stud.set_value(5, "kmg", 's');
	stud.display();     //ִ��stud�����display����
	return 0;
}
