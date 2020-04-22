#include <iostream>
using namespace std;

int main() {
	int array[5];

	cout << "숫자 5개를 입력하면 거꾸로 출력되는 프로그램" << endl;
	for (int i = 0;i < 5;i++) cin >> array[i];
	for (int i = 0;i < 5;i++) cout << array[i] << endl;

	return 0;
}