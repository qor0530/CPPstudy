#include <iostream>
using namespace std;

int main()
{
	char name[20];
	char password[10];

	cout << " 이름을 입력하세요 " << endl;
	cin.getline(name, 20);

	cout << " 패스워드를 입력하세요" << endl;
	cin.getline(password, 10);
	cin.ignore();

	cout << "이름: " << name << endl;
	cout << "패스워드: " << password << endl;

	return 0;
}