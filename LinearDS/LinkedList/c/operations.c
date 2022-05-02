#include <stdio.h>
#include <stdlib.h>

// self-referential structure
struct node
{
	int data;
	struct node *next;
} * head;
typedef struct node node;

void displayList(node *head)
{
	printf("LINKED LIST\n|HEAD| ->");
	while (head)
	{
		printf(" %d ->", head->data);
		head = head->next;
	}
	printf(" |NULL|");
}

node *insertFirst(node *head, int data)
{
	node *link;
	link = (node *)malloc(sizeof(node));

	link->data = data;
	link->next = head;
	head = link;
	return head;
}