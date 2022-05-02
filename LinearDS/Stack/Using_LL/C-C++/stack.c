#include <stdio.h>
#include <stdlib.h>

// linked list node
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

// display stack
void display(node *top)
{
	printf("\t\bSTACK\nTOP ->");
	while (top)
	{
		printf("| %d \t\b\b\b\b|\n\t\b\b", top->data);
		top = top->next;
	}
	printf("+-----+");
}

// PUSH OPERATION
node *push(node *top, int data)
{
	node *link;
	link = (node *)malloc(sizeof(node));

	// To create first node
	if (!top)
	{
		link->data = data;
		link->next = NULL;
		top = link;
	}
	else
	{
		link->data = data;
		link->next = top;
		top = link;
	}
	return link;
}

// POP OPERTION
node *pop(node *top)
{
	// stack empty, underflow
	if (!top)
	{
		return;
	}
	else
	{
		node *temp = top;
		top = top->next;
		temp->next = NULL;
		free(temp);
	}
	return top;
}
