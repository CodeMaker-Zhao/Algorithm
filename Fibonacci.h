#ifndef FIBONACCI
#define FIBONACCI
#include<vector>
long long rawF(int n) {
	if (n == 0)return 0;
	if (n == 1)return 1;
	return rawF(n - 1) + rawF(n - 2);
}
long long genF(int n) {
	std::vector<int> vi(n+1, 0);
	vi[0] = 0, vi[1] = 1;
	for (size_t i = 2; i < n+1; i++)
	{
		vi[i] = vi[i - 1] + vi[i - 2];
	}
	return vi[n];
}
#endif // !FIBONACCI

#pragma once
