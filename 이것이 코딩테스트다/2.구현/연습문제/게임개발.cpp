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
		dir = pos.second == 0 ? 3 : pos.second - 1;//1. ������ ���� ����(�ݽð�������� 90�� ȸ��)
		pair<pair<int, int>, int> moveTo = { pos.first, dir };
		switch (moveTo.second)
		{
		case 0://��
			moveTo.first.second -= 1;
			break;
		case 1://��
			moveTo.first.first += 1;
			break;
		case 2://��
			moveTo.first.second += 1;
			break;
		case 3://��
			moveTo.first.first -= 1;
			break;
		default:
			break;
		} //�������� �̵��غ���.

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
			//�ٶ󺸴� ������ ������ ä�� ��ĭ �ڷ� ���� 1�ܰ�� ���ư���.
			switch (moveTo.second)
			{
			case 0://��
				moveTo.first.second += 2;
				break;
			case 1://��
				moveTo.first.first -= 2;
				break;
			case 2://��
				moveTo.first.second -= 2;
				break;
			case 3://��
				moveTo.first.first += 2;
				break;
			default:
				break;
			} //�������� �̵��غ���.

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