#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int result = 0;

	// 1 <= x,y <= N
	//인 조건을 만족해야한다.
	pair<int, int> vec = { 1,1 }; //좌표는 항상 처음은 1,1
	int N = 5; //가상 맵의 길이는 N*N
	vector<string> commands = { "R", "R", "R", "U", "D", "D" };

	for (auto com : commands)
	{
		pair<int, int> Nvec = vec; //임시 데이터 복사.

		if(com == "L")
			Nvec.second--;
		else if(com == "R")
			Nvec.second++;
		else if(com == "U")
			Nvec.first--;
		else if (com == "D")
			Nvec.first++;


		if (1 <= Nvec.first && Nvec.first <= N && 1 <= Nvec.second && Nvec.second <= N)//맵 안의 범위이면 적용.
			vec = Nvec;
		
	}

	cout << vec.first << vec.second;
	return 0;
}