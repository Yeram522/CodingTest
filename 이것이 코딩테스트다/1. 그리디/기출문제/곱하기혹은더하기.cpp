#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> nums = { 5,6,7 };  //{ 0,2,9,8,4 };

	int result = 0;

	int idx = 0;
	for (auto num : nums)//���� ū ��� ���� ���;���.
	{
		int nxtIdx = idx + 1;
		if (nxtIdx == nums.size())
		{
			result = num;
			break;
		}

		if (num == 0 || nums[nxtIdx] == 0)
			nums[nxtIdx] += num; //���� �ϳ��� 0�̸� ����
		else
			nums[nxtIdx] *= num;


		//idx ����
		idx++;
	}

	cout << result;
	return 0;
}