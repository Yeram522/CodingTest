#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int N = 5;//°øÆ÷µµ
	vector<int> ratesList = { 5,4,4,3,3,2,2,2,3,1 };

	sort(ratesList.rbegin(), ratesList.rend());

	int indexP=0;

	int result = 0;
	while (indexP <= ratesList.size()-1)
	{
		int value = ratesList[indexP];

		indexP += value;

		result++;

	}

	cout << result;
	
	return 0;
}