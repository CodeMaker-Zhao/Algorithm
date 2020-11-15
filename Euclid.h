#ifndef EUCLID
#define EUCLID
#include<iostream>
int findEuclid(int p, int q) {
	int remainder = p % q;
	while (remainder != 0) {
		p = q;
		q = remainder;
		remainder = p % q;
	}
	return q;
}
#endif // !EUCLID

#pragma once
