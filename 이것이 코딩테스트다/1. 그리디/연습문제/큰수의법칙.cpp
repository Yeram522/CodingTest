#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{//입력 예시
	int N = 5;//행 개수
	int M = 8;//열 개수
	int K = 3;//열 개수

	//카드 배열
	vector<int> numList = {2,4,5,4,6};

	//내림차순으로 정렬한다.

	sort(numList.rbegin(), numList.rend());

	int firstMax = numList[0];
	int secondMax = numList[1];

	int result = M / (K + 1) * (firstMax * K + secondMax) + M % (K + 1) * firstMax;

	cout << result;
	return 0;
}