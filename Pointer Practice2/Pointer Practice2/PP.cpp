#include <iostream>
using namespace std;

int main()
{
	char name[20];
	char password[10];

	cout << " �̸��� �Է��ϼ��� " << endl;
	cin.getline(name, 20);

	cout << " �н����带 �Է��ϼ���" << endl;
	cin.getline(password, 10);
	cin.ignore();

	cout << "�̸�: " << name << endl;
	cout << "�н�����: " << password << endl;

	return 0;
}