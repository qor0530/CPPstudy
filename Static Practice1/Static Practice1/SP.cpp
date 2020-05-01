#include <iostream>
using namespace std;

class Math
{
	int a, b;
public:
	int abs(int a)
	{
		return a > 0 ? a : -a;
	}
	int max(int a, int b)
	{
		return (a > b) ? a : b;
	}
	int min(int a, int b)
	{
		return (a > b) ? b : a;
	}
};

int main()
{
	Math m;
	cout << "abs(" << m.abs(-5) << ")" << endl;
	cout << "max(" << m.max(10, 8) << ")" << endl;
	cout << "min(" << m.min(-3, -8) << ")" << endl;
}