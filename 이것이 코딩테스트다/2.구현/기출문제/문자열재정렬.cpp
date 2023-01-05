#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
	string sentence = "K1KA5CB7";
	vector<int> aschi;
	//1. 숫자, 문자 분리
	int sum = 0;
	for (int i = 0; i < sentence.length(); i++)
	{
		int tmp = sentence[i] - '0';

		if (tmp >= 0 && tmp <= 9) //숫자
			sum += tmp;
		else //문자라면
		{
			aschi.push_back(sentence[i]);
		}
	}

	sort(aschi.begin(),aschi.end()); //오름차순으로 정렬

	for (auto print : aschi)	
		cout << (char)print ;
	
	cout << sum;
	return 0;
}