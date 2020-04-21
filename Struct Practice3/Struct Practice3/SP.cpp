#include <iostream>

using namespace std;

struct Player
{
	int	     number;
	char     name[10];
	double   grade;
	char     rating[2];
	void print()
	{
		cout << "number  is " << number << endl;
		cout << "name is  " << name << endl;
		cout << "grade is " << grade << endl;
		cout << "rating is  " << rating << endl;
	}
};
int main()
{
	Player Student_1{ 2020, "ulsan", 150.4, "B" };
	Player Student_2{ 2412, "jonghwa" ,499.9, "A" };
	if (Student_1.grade > Student_2.grade)
	{
		Student_1.print();
	}
	else
	{
		Student_2.print();
		return 0;
	}
}