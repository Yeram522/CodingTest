#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;

	int N = 8;
	int M = 5; //�ִ� �������� ����

	vector<int> balls = { 1,5,4,3,2,4,5,2 };
	
	//1. ��ü ������ ���� ���Ѵ�.
	int totalC = (balls.size() * (balls.size() - 1)) / 2;

	//2. ���� ���� ������ ���Ѵ�.
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