#ifndef FINDPAT
#define FINDPAT
#include<string>
#include<vector>
int findPat(std::string s) {
/*array初始化时，默认构造函数会对确定个数的元素进行默认初始化，而如果对其中一个进行
了初始化，剩余的会进行值初始化*/
	size_t size = s.size();
	std::vector<int> leftNumP(size, 0);
	std::vector<int> rightNumT(size, 0);
	int times = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (i > 0) {
			leftNumP[i] = leftNumP[i - 1];
		}
		if (s[i] == 'P') {
			leftNumP[i]++;
		}
	}
	for (int i = size-1; i > 0; i--)
	{
		if (i < size - 1) {
			rightNumT[i] = rightNumT[i + 1];
		}
		if (s[i] == 'T') {
			rightNumT[i]++;
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		if (s[i]=='A'){
			times += leftNumP[i] * rightNumT[i];
		}
	}
	return times;
}
#endif // !FINDPAT

#pragma once
