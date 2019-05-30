#include <iostream>
#include "../L6abc/Stack.h"
#include "../L6abc/Wrap.h"
#include "../L6fun/Stack.cpp"
#include "../L6fun/Wrap.cpp"

using namespace std;

int main()
{
	int size = 5;
	Stack<int> s(size);

	for (int i = 0; i < size; i++)
	{
		s.Push(i);
	}

	s.printStack();

	cout << endl;
	cout << "POPPED--------------------------------" << endl;
	cout << endl;

	s.Pop(0);
	s.printStack();

	system("pause");
}