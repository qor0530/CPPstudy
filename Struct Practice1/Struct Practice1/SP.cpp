#include <iostream>

using namespace std;

struct Player
{
	char  id[10];
	int	  score;
	int   level;
	float gTime;
};

void print(Player a)
{
	cout << "id is " << a.id << endl;
	cout << "score  and level are " << a.score << ",   " << a.level << endl;
	cout << "lap time " << a.gTime << endl;
}

int main()
{
	Player top{ "jinsil", 86, 3, 120.0 };
	Player challenger{ "jijang", 90, 4, 60.0 };
	if (top.score > challenger.score)
	{
		print(top);
	}
	else
	{
		print(challenger);
		return 0;
	}
}