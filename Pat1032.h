#ifndef PAT1032
#define PAT1032
#include<iostream>
#include<map>
void pat1032() {
	const int maxn = 100010;
	std::map<int, int> school;
	int schID,score;
	while (std::cin >> schID >> score) {
		school[schID] += score;
	}
	int k = 1, max = -1;
	for (const auto &w:school)
	{
		if (w.second>max)
		{
			max = w.second;
			k = w.first;
		}
	}
	std::cout << k << " " << max;
}
#endif // !PAT1032

