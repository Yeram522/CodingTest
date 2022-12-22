#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//입력 예시
	int N = 3;//행 개수
	int M = 3;//열 개수

	//카드 배열
	vector<vector<int>> numList =
	{
		 { 3, 1, 2 },
		 { 4, 1, 4 },
		 { 2, 2, 2 },
	};

	//내림차순으로 정렬한다.
	vector<int> maxList;
	for (auto& arr : numList)
	{
		//내림차순으로 정렬
		sort(arr.rbegin(), arr.rend());
		maxList.push_back(arr[0]);//행에서 가장큰수
	}

	//오름차순으로 정렬
	sort(maxList.begin(), maxList.end());
	int result = maxList[0];

	cout << result;
	return 0;
}