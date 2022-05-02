#include <stdio.h>
#include "stack.c"

int main()
{
	node *stack = NULL;
	int list[5] = {60, 48, 36, 24, 12};
	for (int i = 0; i < 5; i++)
		stack = push(stack, list[i]);
	display(stack);

	// stack = pop(stack);
	// display(stack);
	return 0;
}