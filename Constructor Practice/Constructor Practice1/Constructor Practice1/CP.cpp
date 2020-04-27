#include <iostream>
using namespace std;

class T {
public:
	T() {
		cout << "  3.call class counstructor" << endl;
	}
	T(int a)
	{
		cout << "  3.call class included a constructor " << a << endl;
	}
	~T() {
		cout << "call class deletor" << endl;
	}
};

void TestClass() {
	cout << " 2.test local T start" << endl;
	T localT;
	cout << " 2.test local T end" << endl;
}

int main()
{
	cout << "1.main start" << endl;
	TestClass();
	T::T(5);
	cout << "1.main end" << endl;
}