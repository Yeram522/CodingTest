#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//�Է� ����
	int N = 3;//�� ����
	int M = 3;//�� ����

	//ī�� �迭
	vector<vector<int>> numList =
	{
		 { 3, 1, 2 },
		 { 4, 1, 4 },
		 { 2, 2, 2 },
	};

	//������������ �����Ѵ�.
	vector<int> maxList;
	for (auto& arr : numList)
	{
		//������������ ����
		sort(arr.rbegin(), arr.rend());
		maxList.push_back(arr[0]);//�࿡�� ����ū��
	}

	//������������ ����
	sort(maxList.begin(), maxList.end());
	int result = maxList[0];

	cout << result;
	return 0;
}