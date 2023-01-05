#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;

	pair<int, int> vect = { 'a' -96 , 1}; //나이트의 좌표
	vector<pair<int, int>> options
		= {
			{2,-1},{-2,1},{2,1},{-2,-1},
			{2,1},{-1,2},{1,-2},{-1,-2} };
	
	for (auto opt : options)
	{
		pair<int, int> tmp = vect;
		tmp.first += opt.first;
		tmp.second += opt.second;

		if (0 < tmp.first && tmp.first <= 8 && 0 < tmp.second && tmp.second <= 8)
			result++;
	}



	cout << result;
	return 0;
}