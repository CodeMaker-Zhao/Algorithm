#ifndef RANDSELECT
#define RANDSELECT
#include<array>
template<unsigned N>
int randPartition(std::array<int,N>&A,int left,int right) {
	int temp = A[left];
	while (left<right)
	{
		while (left<right && A[right]>temp)right--;
		A[left] = A[right];
		while (left < right && A[left] < temp)left++;
		A[right] = A[left];
	}
	A[left] = temp;
	return left;
}
#endif // !RANDSELECT

#pragma once
