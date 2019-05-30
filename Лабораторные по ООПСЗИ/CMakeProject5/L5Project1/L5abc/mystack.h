#pragma once
#include <iostream>
using namespace std;

class Stack
{
public:
	Stack(int capacity);
	Stack(const Stack &copy);
	Stack(Stack &&move);
	~Stack();

	Stack &operator=(const Stack &copy);
	Stack &operator=(Stack &&move);
	int &operator[](int index);
	friend ostream& operator<<(ostream& stream, const Stack& value);

	int GetLength();
	int GetCapacity();
	int Pop();
	void Push(int value);
	int Peek();

private:
	int *data;
	int count, capacity; //count - последний элемент, capacity - длина стака
};
