#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;

	int N = 8;
	int M = 5; //최대 볼링공의 무게

	vector<int> balls = { 1,5,4,3,2,4,5,2 };
	
	//1. 전체 조합의 수를 구한다.
	int totalC = (balls.size() * (balls.size() - 1)) / 2;

	//2. 같은 수의 조합을 구한다.
	int overlapsC = 0;
	for (int i = 1; i <= M; i++)
	{
		int tmp = count(balls.begin(), balls.end(), i);
		if (tmp <= 1) continue;
		overlapsC += ((tmp * (tmp - 1)) / 2);
	}

	result = totalC - overlapsC;

	cout << result;

	return 0;
}