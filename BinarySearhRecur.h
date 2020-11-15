#ifndef BINARYSEARCHRECUR
#define BINARYSEARCHRECUR
#include<iostream>
#include<array>
//数组是不能复制的，所以这里参数实际传递的是指向数组首元素的指针。
//所以在函数中不能通过参数的sizeof来计算数组的长度。
int binarySearch(int key,int a[],int left,int right,int times=0) {
	if (left<=right)
	{
		times += 1;
		int mid = (left + right) / 2;
		std::cout << "left is " << left << " right is " << right << " times is " << times<<std::endl;
		if (a[mid]<key)
		{
			left = mid + 1;
			return binarySearch(key, a, left, right, times);
		}
		else if (a[mid] > key) {
			right = mid - 1;
			return binarySearch(key, a, left, right, times);
		}
		else {
			return mid;
		}
	}
	return -1;
}
template<unsigned N>
int binRank(int key, std::array<int,N> a) {
	int left = 0, right = a.size();
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > key) {
			right = mid - 1;
		}
		else if (a[mid] < key) {
			left = mid + 1;
		}
		else {
			while (a[mid-1]==key)
			{
				mid -= 1;
			}
			return mid;
		}
	}
	if (a[left]>key)
	{
		return left;
	}
	else {
		return left + 1;
	}
}
template<unsigned N>
int binCount(int key,std::array<int,N> a) {
	int left = 0, right = a.size();
	while(left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] > key) {
			right = mid - 1;
		}
		else if (a[mid] < key) {
			left = mid + 1;
		}
		else {
			int numEqual = 1;
			int temp = mid;
			while((mid<a.size()-1)&&a[mid + 1] == key) {
				mid += 1;
				numEqual += 1;
			}
			mid = temp;
			while ((mid>0)&&a[mid - 1] == key) {
				mid -= 1;
				numEqual += 1;
			}
			return numEqual;
		}
	}
	return 0;
}
#endif // !BINARYSEARCHRECUR

#pragma once
