#ifndef FINDPRIME
#define FINDPRIME
#include<iostream>
const int maxn = 10100;
int prime[maxn], pNum = 0;
bool p[maxn]{ false };
void findPrime() {
	for (size_t i = 2; i < maxn; i++)
	{
		if (p[i]!=true)
		{
			prime[pNum++] = i;
			for (size_t j = i+i; j < maxn; j+=i)
			{
				p[j] = true;
			}
		}
	}
}
void primeFactors(int N) {
	int num = 0;
	struct fcn
	{
		int fac, cnt;
	};
	findPrime();
	fcn factor[10];
	int rawN = N;
	int sqn = (int)sqrt(N);
	for (size_t i = 0; prime[i] <= sqn&&i<pNum; i++)
	{
		if (N%prime[i]==0)
		{
			factor[num].fac = prime[i];
			factor[num].cnt = 0;
			while (N%prime[i]==0)
			{
				factor[num].cnt++;
				N /= prime[i];
			}
			num++;
		}
		if (N == 1)break;
	}
	if (N!=1&&N!=rawN)
	{
		factor[num].fac = N;
		factor[num++].cnt = 1;
	}
	for (size_t i = 0; i < num; i++)
	{
		if (i>0)
		{
			std::cout << " *";
		}
		std::cout << factor[i].fac;
		if (factor[i].cnt>1)
		{
			std::cout <<"^" <<factor[i].cnt;
		}
	}
}
#endif // !FINDPRIME

#pragma once
