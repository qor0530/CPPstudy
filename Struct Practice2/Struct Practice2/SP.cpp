#include <iostream>

using namespace std;

struct Player
{
	char  id[10];
	int	  score;
	int   level;
	float gTime;
	void print()
	{
		cout << "id is " << id << endl;
		cout << "score  is " << score << endl;
		cout << "level is " << level << endl;
		cout << "lap time " << gTime << endl;
	}
};
int main()
{
	Player top{ "jinsil", 86, 3, 120.0 };
	Player challenger{ "jijang", 90, 4, 60.0 };
	if (top.score > challenger.score)
	{
		top.print();
	}
	else
	{
		challenger.print();
		return 0;
	}
}