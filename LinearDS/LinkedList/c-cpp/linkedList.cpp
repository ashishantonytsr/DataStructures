/*
"node" is a data type created using struct; which contains
integer 'data' & node 'next' .
(can be seen at ./linkedListReversal.cpp @ line 4)
*/

#include <iostream>
#include <stdlib.h>
#include "linkedListReversal.cpp"
using namespace std;

void displayList(node *head)
{
	node *index = head;
	while (index != NULL)
	{
		cout << index->data << ' ';
		index = index->next;
	}
	cout << endl;
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

	// cout<<"Linked List : ";
	// displayList(head);
	node *reversedHead;
	reversedHead = linkedListReversal(head);
	cout << "Reversed Linked List : ";
	displayList(reversedHead);
	return 0;
}