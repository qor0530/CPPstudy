#include <iostream>
using namespace std;

int main()
{
	int array[5] = { 10,20,30,40,50 };
	int* parray;

	cout << "array address" << &parray << endl;
	parray = array;
	for (int i = 0; i < 5;i++)
	{
		cout << " parray address " << &parray[i];
		cout << " parray value " << parray[i] << endl;
	}
	for (int i = 0; i < 5;i++)
	{
		cout << " parray address " << &array[i];
		cout << " parray value " << array[i] << endl;
	}
}