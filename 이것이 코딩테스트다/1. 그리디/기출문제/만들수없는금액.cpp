#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
	int result = 0;
	int N = 5; //������ ����
	vector<int> coins = { 3,2,1,1,9 };

	sort(coins.rbegin(), coins.rend());//��������
	int sum = accumulate(coins.begin(), coins.end(), 0.0); //����Ʈ ��� �� ����. ����� �ִ� ���� �ִ�
	for (int i = 1; i < sum; i++)
	{
		int tmp = i;
		for (auto coin : coins)
		{
			if (coin > tmp) continue;
			tmp -= coin;
		}

		if (tmp != 0)
		{
			result = i;
			break;
		}
	}

	
	cout << result;

	return 0;
}