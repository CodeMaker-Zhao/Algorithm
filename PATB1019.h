#ifndef PATB1019
#define PATB1019
#include<vector>
#include<iostream>
#include<algorithm>
#include<algorithm>
void numberKaprekar(int N) {
	std::vector<int> num;
	int maxm = 0;
	double minm = 0;
	for (size_t i = 0; i < 4; i++)
	{
		num.push_back(N % 10);
		N /= 10;
	}
	std::sort(num.begin(), num.end(), [](const int& lhs, const int& rhs) {
		return lhs > rhs;
		});
	for (size_t i = 0; i < 4; i++)
	{
		maxm = maxm * 10 + num[i];
		minm = num[i] + minm / 10.0;
	}
	minm = (int)(minm * 1000);
	std::cout << maxm << " - " << minm << " = " << maxm - minm << std::endl;
	if (maxm-minm!=0&&maxm-minm!=6174)
	{
		numberKaprekar(maxm - minm);
	}
}
#endif // !PATB1019#pragma once
