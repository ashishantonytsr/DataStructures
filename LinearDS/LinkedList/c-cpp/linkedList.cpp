#include <iostream>
#include <stdlib.h>
#include "LinkedListReversal.cpp"
using namespace std;

void displayList(node *head)
{
	node *index = head;
	while (index != NULL)
	{
		cout << index->data << '\n';
		index = index->next;
	}
}

node *insertFirst(node *head, int data)
{
	node *link;
	link = (node *)malloc(sizeof(node)); // Memory allocated with data type & size (sizeof(data_type))
	link->data = data;
	link->next = head;
	head = link;
	return head;
}

// TODO: implement deletion
void deleteFirst(int item)
{
}

// TODO: implement search()
// TODO: implement length()
// TODO: implement sort()

int main()
{
	node *head = NULL;
	head = insertFirst(head, 5);
	head = insertFirst(head, 10);
	head = insertFirst(head, 15);
	head = insertFirst(head, 40);

	// displayList(head);
	node *reversedHead;
	reversedHead = linkedListReversal(head);
	displayList(reversedHead);
	return 0;
}