#include <iostream>
#include "stack.cpp"

int main()
{
	int size = 3;
	int stack[size];

	push(stack, size, 5);
	push(stack, size, 8);
	push(stack, size, 12);
	push(stack, size, 7);

	display(stack);
	pop(stack);
	display(stack);

	search(stack, 8);
}
