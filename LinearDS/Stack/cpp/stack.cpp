#include <iostream>
using namespace std;

int stackSize, endPointer = -1;

void display(int *stack)
{
	if (endPointer == -1)
		cout << "\n\tStack Empty";
	else
	{
		cout << endl
				 << '\t';
		for (int i = 0; i <= endPointer; i++)
			cout << stack[i] << " ";
	}
	cout << endl;
}

void push(int *stack, int item)
{
	if (endPointer < stackSize - 1)
	{
		endPointer++;
		stack[endPointer] = item;
		cout << "Pushed item : " << item;
	}
	else
	{
		cout << "\n\tError : Stack OverFlow";
	}
}

void pop(int stack[])
{
	if (endPointer < 0)
		cout << "\n\tError : Stack UnderFlow";
	else
	{
		int poppedItem = stack[endPointer];
		cout << "Popped item " << poppedItem;
		endPointer--;
	}
}

int search(int stack[], int item)
{
	for (int i = 0; i <= endPointer; i++)
		if (item == stack[i])
			return i + 1;
	return -1;
}
