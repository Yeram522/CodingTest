#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> lists = { 0,0,0,1,1,0,0 };  //{ 0,2,9,8,4 };

	int result = 0;

	int countZero = 0;
	int countOne = 0;
	
	bool type = lists[0] == 0 ? false: true;
	bool TmpType = type;

	for (auto num : lists)
	{
		switch (num)
		{
		case 0:
			TmpType = false;
			break;
		case 1:
			TmpType = true;
			break;
		default:
			break;
		}

		if (type == TmpType)
		{
			continue; //이전 타입과 다음 타입이 같다면 Pass
		}
		//아니라면

		if (type)
			countOne++;
		else
			countZero++;

		type = TmpType;
	}

	if (lists.back() == 1)
		countOne++;
	else
		countZero++;

	result = countZero >= countOne ? countOne : countZero;

	cout << result;
	return 0;
}