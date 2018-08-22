#include <iostream>
using namespace std;
int main()
{
	int start, end, duration = 0;
	cin >> start >> end;
	if (start >= 12 && end < 12)
	{
		start = start - 12;
		duration = 12 - (start - end);
	}
	else if (start < 12 && end >= 12)
	{
		end = end - 12;
		duration = 12 + (end - start);
	}
	else if (start < 12 && end < 12)
	{
		if (start > end)
		{
			duration = 12 - (start - end);
		}
		else if (end > start)
		{
			duration = end - start;
		}
		else
			duration = 24;
	}
	else if (start >= 12 && end >= 12)
	{
		if (start > end)
			duration = 12 - (start - end);
		else if (end > start)
			duration = end - start;
		else
			duration = 24;
	}
	else if (start == end)
		duration = 24;
		
	cout << "O JOGO DUROU "<<duration <<" HORA(S)" <<endl;

	return 0;
}