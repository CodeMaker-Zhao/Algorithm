#ifndef EUCLID
#define EUCLID
#include<iostream>
int findEuclid(int p, int q) {
	return !q ? p : findEuclid(q, p % q);
}
#endif // !EUCLID

#pragma once
