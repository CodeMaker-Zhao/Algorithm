#ifndef DRAWSQUARE
#define DRAWSQUARE
#include<iostream>
void drawSquare() {
	int n;
	char c;
	std::cout << "ÊäÈë±ß³¤ºÍ×ÖÄ¸";
	std::cin >> n >> c;
	for (int i = 0; i < n/2; i++)
	{
		if (i == 0 || i == n/2-1) {
			for (int i = 0; i < n; i++)
			{
				std::cout << c;
			}
			std::cout << std::endl;
		}
		else {
			std::cout << c;
			for (int i = 0; i < n-2; i++)
			{
				std::cout << " ";
			}
			std::cout << c << std::endl;
		}
	}
}
#endif // !DRAWSQUARE
#pragma once
