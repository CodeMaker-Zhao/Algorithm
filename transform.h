#ifndef TRANSFORM
#define TRANSFORM
#include<iostream>
#include<deque>
void transform() {
	std::cout << "������һ��������ָ������ԭ�н��ƺͽ�Ҫת���Ľ���";
	int raw, b, d;
	std::cin >> raw >> b >> d;
	int product = 1, y = 0;
	while (raw!=0)
	{
		y = y + (raw % 10) * product;
		raw /= 10;
		product *= b;
	}
	std::deque<int> vi;
	while (y != 0) {
		vi.push_front(y%d);
		y /= d;
	}
	for (auto &c:vi) {
		std::cout << c;
	}
}
#endif // !TRANSFORM

