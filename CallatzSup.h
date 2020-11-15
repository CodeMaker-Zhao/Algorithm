#ifndef CALLATZ
#define CALLATZ
#include<iostream>
void CallatzSup() {
	int n, count=0;
	std::cin >> n;
	while (n != 1) {
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else {
			n = (3 * n + 1) / 2;
		}
		count += 1;
	}
	std::cout<<count;
}
#endif // !CallatzSup
#pragma once
