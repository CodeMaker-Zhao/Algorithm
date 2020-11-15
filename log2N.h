#ifndef LOG2N
#define LOG2N
#include<iostream>
int lg2N(int N) {
	int s = 0;
	for (size_t i = N; i > 1; i /= 2)
	{
		s++;
	}
	return s;
}
#endif // !LOG2N

#pragma once
