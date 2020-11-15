#ifndef PRIMEMATRIX
#define PRIMEMATRIX
#include<vector>
#include"Euclid.h"
void primeMatrix(int row,int column) {
	std::vector<std::vector<bool>> matrix(row,std::vector<bool>(column,false)); 
	for (size_t i = 1; i < row; i++)
	{
		for (size_t j = 1; j < column; j++)
		{
			if (findEuclid(i, j) != 1||i==1||j==1) matrix[i][j] = false;
			else matrix[i][j] = true;
		}
	}
	for (size_t i = 1; i < row; i++)
	{
		for (size_t j = 1;j < column; j++)
		{
			std::cout << matrix[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}
#endif // !PRIMEMATRIX

#pragma once
