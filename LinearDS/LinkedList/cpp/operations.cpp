#include <iostream>
#include <stdlib.h>
struct node {
	int data;
	node *next;
};

// Display the linked list
void displayList(node *head) {
	while (head)
	{
		std::cout << head->data << ' ';
		head = head->next;
	}
	std::cout << std::endl;
}

// Insert a node at the beginning of the list and return the list
node *insertFirst(node *head, int data)
{
	node *link;
	link = (node *)malloc(sizeof(node)); // Memory allocated with data type & size (sizeof(data_type))

	link->data = data;
	link->next = head;
	head = link;
	return head;
}

// Insert a node at the end of the list and return the list
node *insertLast(node *head, int data)
{
	// new node created - memory allocated, data & address added
	node *link;
	link = (node *)malloc(sizeof(node));
	link->data = data;
	link->next = NULL;

	// if list is empty, create first node and assign head
	if (head == NULL)
	{
		head = link;
		return head;
	}

	// temporary node(tail) is used to fetch the tail of the list
	// then, new node is added at the address of tail
	node *tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = link;
	return head;
}

// Insert a node at the given position and return the list
node *insertAt(node *head, int pos, int data)
{
	// creating new node and allocating memory
	node *link;
	link = (node *)malloc(sizeof(node));
	link->data = data;

	// traversing through list until position
	node *temp = head;
	for (int i = 0; i < pos - 2; i++)
		temp = temp->next;

	// adding node in position
	link->next = temp->next;
	temp->next = link;
	return head;
}

// Delete the first node and return the list
node *deleteFirst(node *head)
{
	head = head->next;
	return head;
}

// Delete the last node and return the list
node *deleteLast(node *head)
{
	node *temp = head;
	// traverses until second last node
	while (temp->next->next != NULL)
		temp = temp->next;
	// set address of second last node as null
	temp->next = NULL;
	return head;
}

// Delete the node from the given position and return list
node *deleteAt(node *head, int pos)
{
	node *temp = head;
	// traversing until previous node of targeted node
	// and set the address of prev node as address of
	// next node of targeted node
	for (int i = 0; i < pos - 2; i++)
		temp = temp->next;
	temp->next = temp->next->next;
	return head;
}

// Search for the node in the list and return its position
int searchNode(node *head, int data)
{
	node *index = head;
	for (int i = 1; index != NULL; i++)
	{
		if (index->data == data)
			return i;
		index = index->next;
	}
	return NULL;
}

// TODO: implement length()
// TODO: implement sort()