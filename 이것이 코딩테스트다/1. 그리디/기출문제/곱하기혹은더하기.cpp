#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> nums = { 5,6,7 };  //{ 0,2,9,8,4 };

	int result = 0;

	int idx = 0;
	for (auto num : nums)//가장 큰 결과 값이 나와야함.
	{
		int nxtIdx = idx + 1;
		if (nxtIdx == nums.size())
		{
			result = num;
			break;
		}

		if (num == 0 || nums[nxtIdx] == 0)
			nums[nxtIdx] += num; //둘중 하나가 0이면 덧셈
		else
			nums[nxtIdx] *= num;


		//idx 증감
		idx++;
	}

	cout << result;
	return 0;
}