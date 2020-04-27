#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	Rectangle();
	Rectangle(int x);
	Rectangle(int x, int y);
	bool isSquare();
};

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	cout << "Rectangle area is " << width * height << endl;
}

Rectangle::Rectangle(int x)
{
	width = x;
	height = width;
	cout << "Rectangle area is " << width * height << endl;
}


Rectangle::Rectangle(int x, int y)
{
	width = 3;
	height = 5 - width;
	cout << "Rectangle area is " << width * height << endl;
}

bool Rectangle::isSquare()
{
	if (width == height) return true;
	else return false;
}


int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}