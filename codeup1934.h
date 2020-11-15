#ifndef CODEUP1934
#define CODEUP1934
#include<iostream>
#include<vector>
int codeup1934() {
	int n;
	int x;
	std::vector<int> vi;
	while (std::cin>>n) {
		vi.push_back(n);
	}
	std::cin.clear();
	std::cin.ignore();
	std::cout << "ÇëÊäÈëX" << std::endl;
	std::cin >> x;
	for (int k = 0;k != vi.size();k++) {
		if (vi[k] == x) {
			return k;
		}
	}
	return -1;
}
#endif // !1
#pragma once
