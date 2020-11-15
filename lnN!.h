#ifndef LNN
#define LNN
#include<math.h>
double lnn(int n) {
	if (n == 1) return 0;
	return lnn(n - 1) + log(n);
}
#endif // !LNN!

#pragma once
