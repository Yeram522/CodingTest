#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//�Է� ����
	int N = 25;
	int K = 5;

	int count = 0;
	while (N > 1)//1 �ʰ� �ϋ�������
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