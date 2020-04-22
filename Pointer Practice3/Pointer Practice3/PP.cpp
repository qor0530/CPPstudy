#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int* pa = &a;

	cout << " a:" << a << endl;
	cout << "pa : " << pa << endl;
	cout << "*pa : " << *pa << endl;
	cout << "&a: " << &a << endl;

	return 0;
}