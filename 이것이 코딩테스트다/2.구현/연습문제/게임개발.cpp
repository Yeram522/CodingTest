#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;
	int N = 4;
	int M = 4;
	bool movable = true;
	pair<pair<int, int>, int> pos = { {1,1},0 };

	vector<vector<int>> maps
		= {
			{1,1,1,1},
			{1,0,0,1},
			{1,1,0,1},
			{1,1,1,1}
	};
	maps[pos.first.second][pos.first.first] = 2;
	int dir;
	int trigger = 0;
	while (movable)
	{
		dir = pos.second == 0 ? 3 : pos.second - 1;//1. 움직일 방향 설정(반시계방향으로 90도 회전)
		pair<pair<int, int>, int> moveTo = { pos.first, dir };
		switch (moveTo.second)
		{
		case 0://북
			moveTo.first.second -= 1;
			break;
		case 1://동
			moveTo.first.first += 1;
			break;
		case 2://남
			moveTo.first.second += 1;
			break;
		case 3://서
			moveTo.first.first -= 1;
			break;
		default:
			break;
		} //가상으로 이동해본다.

		if (maps[moveTo.first.second][moveTo.first.first] == 0)
		{
			pos = moveTo;

			trigger = 0;
			result++;
			maps[moveTo.first.second][moveTo.first.first] = 2;
			continue;
		}
		else
		{
			pos.second = dir;

			trigger++;
		}

		if (trigger >= 4)
		{
			//바라보는 방향을 유지한 채로 한칸 뒤로 가고 1단계로 돌아간다.
			switch (moveTo.second)
			{
			case 0://북
				moveTo.first.second += 2;
				break;
			case 1://동
				moveTo.first.first -= 2;
				break;
			case 2://남
				moveTo.first.second -= 2;
				break;
			case 3://서
				moveTo.first.first += 2;
				break;
			default:
				break;
			} //가상으로 이동해본다.

			if (maps[moveTo.first.second][moveTo.first.first] == 1)
			{
				movable = false;
			}
			else
			{
				pos = moveTo;

				trigger = 0;
				result++;
				maps[moveTo.first.second][moveTo.first.first] = 2;
			}
		}
	}
	cout << result;
	return 0;
}