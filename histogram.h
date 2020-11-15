#ifndef HISTOGRAM
#include<vector>
#include<array>
template<unsigned N>
std::vector<int> histogram(std::array<int, N> a, int M) {
	std::vector<int> vi(M, 0);
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] >= 0 && a[i] < M) {
			vi[a[i]]++;
		}
	}
	return vi;
}

#endif // !HISTOGRAM

#pragma once
