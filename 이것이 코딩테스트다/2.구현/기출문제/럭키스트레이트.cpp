#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
	string N = "123402"; //주어진 점수

	string left = N.substr(0,N.length()/2);
	string right = N.substr(N.length() / 2, N.length() / 2);

	int iLeft = 0;
	int iRight = 0;

	for (int i = 0; i < N.length() / 2; i++)
	{
		iLeft += left[i] - '0';
		iRight += right[i] - '0';
	}


	if (iLeft == iRight)
		cout << "LUCKY";
	else
		cout << "READY";

	return 0;
}