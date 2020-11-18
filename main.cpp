#include<iostream>
#include<array>
#include<vector>

#include"PATB1019.h"
#include"primeMatrix.h"
#include"findPrime.h"
using namespace std;
template<typename T>
class myStack {
private:
	int n=0;
	class Node {
		friend myStack;
		T data;
		Node* next;
	};
	Node* first;
public:
	void push(T item) {
		Node* oldfirst = first;
		first = new Node();
		first->data = item;
		first->next = oldfirst;
		n++;
	}
	T pop() {
		Node* todele = first;
		T item = first->data;
		first = first->next;
		delete todele;
		n--;
		return item;
	}
	bool isEmpty() {
		return n == 0;
	}
	T top() {
		return first->data;
	}
	int size() {
		return n;
	}
};

int main()
{
	myStack<int> ms;
	int m, n, k;
	cin >> m >> n >> k;
	for (size_t i = 0; i < k; i++)
	{
		while (!ms.isEmpty())
		{
			ms.pop();
		}
		int current = 0;
		bool flag = true;
		auto arr = new int[n];
		cout << "ÊäÈëÊý¾Ý";
		for (size_t i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (size_t i = 1; i <= n; i++)
		{
			ms.push(i);
			if (ms.size()>m)
			{
				flag = false;
				break;
			}
			while (!ms.isEmpty()&&ms.top() == arr[current]) {
				ms.pop();
				current++;
			}
		}
		if (flag==true&&ms.isEmpty())
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}