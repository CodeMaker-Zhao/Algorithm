#ifndef FULLPERMUTATION
#define FULLPERMUTATION
#include<iostream>
#include<vector>
int n = 3;
const int maxn = 10;
std::vector<int> P(maxn, 0);
std::vector<bool> hashTable(maxn, false);
void generateP(int index) {
	if (index == n )
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << P[i];
		}
		std::cout << std::endl;
		return;
	}
	for (int  i = 0; i < n; i++)
	{
		if (hashTable[i]==false)
		{
			P[index] = i;
			hashTable[i] = true;
			generateP(index + 1);
			hashTable[i] = false;
		}
	}
}
#endif // !FULLPERMUTATION
#pragma once
