#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int main()
{
	int answer = 0;
    vector<int> food_times = { 3,1,2 };

    long long k = 5;
    long long time = 0;


    //map setting
    map<int, int> foods_table;

    int i = 1;
    for (auto time : food_times)
    {
        foods_table.insert(i, time); //key�� ��ȣ, value�� �ð�.
        i++;
    } //map�� key�� �������� �ڵ� ���� �ȴ�.1~N

    auto iter = foods_table.begin();
    while (time <= k) {
        
        if (iter->second == 0)
        {
            ++iter;
            continue;
        }

        foods_table[iter->first] -= 1;
        ++iter;
        ++time;
        if (iter == foods_table.end())
        {
            iter = foods_table.begin();
        }
    }

    answer = iter->first;
	

	cout << answer;
	return 0;
}