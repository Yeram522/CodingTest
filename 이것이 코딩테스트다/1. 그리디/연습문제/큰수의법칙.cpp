#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//�Է� ����
	int N = 5;//�� ����
	int M = 8;//�� ����
	int K = 3;//�� ����

	//ī�� �迭
	vector<int> numList = {2,4,5,4,6};

	//������������ �����Ѵ�.

	sort(numList.rbegin(), numList.rend());

	int firstMax = numList[0];
	int secondMax = numList[1];

	int result = M / (K + 1) * (firstMax * K + secondMax) + M % (K + 1) * firstMax;

	cout << result;
	return 0;
}