#include <iostream>
#include <stdlib.h>
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
