#ifndef STACK
#define STACK

using namespace std;
template<class Item>
class fiexdCapacityStack {
private:
	Item* a;   //stack entries
	int N;		//size
public:
	fiexdCapacityStack(int cap) {
		a = new Item[cap];  //No assignment warning
	}
	bool isEmpty() { return N == 0; }
	int size() { return N; }
	void push(Item item) {
		Item* b = new Item[++N];
		std::copy(a, a + N - 1, b);
		b[N - 1] = item;
		a = b;
	}
	Item pop() { return a[--N]; }
}
#endif // !STACK
#pragma once
