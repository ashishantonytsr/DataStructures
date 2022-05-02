#include <iostream>

int TOP = -1;

void display(int stack[])
{
	if (TOP == -1)
		std::cout << "\n\tStack Empty";
	else
	{
		std::cout << std::endl
							<< '\t';
		for (int i = 0; i <= TOP; i++)
			std::cout << stack[i] << " ";
	}
	std::cout << std::endl;
}

void push(int stack[], int stackSize, int item)
{
	if (TOP < stackSize - 1)
	{
		TOP++;
		stack[TOP] = item;
		std::cout << "Pushed item : " << item << std::endl;
	}
	else
	{
		std::cout << "\n\tError : Stack OverFlow";
	}
}

void pop(int stack[])
{
	if (TOP < 0)
		std::cout << "\n\tError : Stack UnderFlow";
	else
	{
		int poppedItem = stack[TOP];
		std::cout << "Popped item " << poppedItem << std::endl;
		TOP--;
	}
}

void search(int stack[], int item)
{
	for (int i = 0; i <= TOP; i++)
		if (item == stack[i])
		{
			std::cout << item << " found at location " << i + 1;
			return;
		}
	std::cout << item << " not found";
}
