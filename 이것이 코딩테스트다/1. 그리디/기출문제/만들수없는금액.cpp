#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
	int result = 0;
	int N = 5; //동전의 개수
	vector<int> coins = { 3,2,1,1,9 };

	sort(coins.rbegin(), coins.rend());//내림차순
	int sum = accumulate(coins.begin(), coins.end(), 0.0); //리스트 모든 값 리턴. 만들수 있는 수의 최대
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