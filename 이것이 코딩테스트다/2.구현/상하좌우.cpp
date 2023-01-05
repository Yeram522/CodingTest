#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;

	// 1 <= x,y <= N
	//�� ������ �����ؾ��Ѵ�.
	pair<int, int> vec = { 1,1 }; //��ǥ�� �׻� ó���� 1,1
	int N = 5; //���� ���� ���̴� N*N
	vector<string> commands = { "R", "R", "R", "U", "D", "D" };

	for (auto com : commands)
	{
		pair<int, int> Nvec = vec; //�ӽ� ������ ����.

		if(com == "L")
			Nvec.second--;
		else if(com == "R")
			Nvec.second++;
		else if(com == "U")
			Nvec.first--;
		else if (com == "D")
			Nvec.first++;


		if (1 <= Nvec.first && Nvec.first <= N && 1 <= Nvec.second && Nvec.second <= N)//�� ���� �����̸� ����.
			vec = Nvec;
		
	}

	cout << vec.first << vec.second;
	return 0;
}