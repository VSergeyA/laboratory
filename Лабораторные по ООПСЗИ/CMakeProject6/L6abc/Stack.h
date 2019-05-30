#pragma once
#include "../L6abc/AbstractStack.h"
#include "../L6abc/Wrap.h"

template <typename T>
class Stack : AbstractStack<T>
{
private:
	int size, pos;
	Wrap<T> *arr;
public:
	Stack(int _size);
	Stack(const Stack &other);
	Stack(Stack &&other);
	~Stack();

	void Push(T item) override;
	Wrap<T>* Pop(int _pos) override;
	Wrap<T>* Get(int _pos) override;
	int getSize() override;
	void printStack();
};