#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
	string sentence = "K1KA5CB7";
	vector<int> aschi;
	//1. ����, ���� �и�
	int sum = 0;
	for (int i = 0; i < sentence.length(); i++)
	{
		int tmp = sentence[i] - '0';

		if (tmp >= 0 && tmp <= 9) //����
			sum += tmp;
		else //���ڶ��
		{
			aschi.push_back(sentence[i]);
		}
	}

	sort(aschi.begin(),aschi.end()); //������������ ����

	for (auto print : aschi)	
		cout << (char)print ;
	
	cout << sum;
	return 0;
}