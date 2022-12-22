#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//입력 예시
	int N = 25;
	int K = 5;

	int count = 0;
	while (N > 1)//1 초과 일떄까지만
	{
		if (N % K == 0)
			N /= K;
		else
		{
			N -= 1;
		}

		count++;
	}

	cout << count;
	return 0;
}