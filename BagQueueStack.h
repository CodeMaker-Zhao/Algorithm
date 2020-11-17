#ifndef BAGQUEUESTACK
#define BAGQUEUESTACK
#include<vector>
template<typename T>
class FixedCapacityStack {
private:
	T (*vt)[];
public:
	FixedCapacityStack(int cap): {vt=new T[cap]};

};
#endif // !BAGQUEUESTACK

#pragma once
