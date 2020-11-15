#ifndef BINARYSEARCH
#define BINARYSEARCH
#include<vector>
int BinarySearch(std::vector<int> &vc,int x) {
	int left=0, right=vc.size();
	int mid = (left+right)/2;
	while (left<=right) {
		if (vc[mid]==x)
		{
			return mid;
		}
		else if (vc[mid] < x) {
			left = mid+1;
		}
		else {
			right = mid - 1;
		}
		mid = (left + right) / 2;
	}
	return -1;
}
double FindRadical2() {
	double left = 1, right = 2;
	double mid = (left + right) / 2;
	while (right-left>1e-5) {
		if (mid * mid > 2) {
			right = mid;
		}
		else {
			left = mid;
		}
		mid = (left + right) / 2;
	}
	return mid;
}
#endif // !BINARTSEARCH

#pragma once
