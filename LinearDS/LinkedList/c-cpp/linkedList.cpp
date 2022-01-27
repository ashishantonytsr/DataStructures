#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	node *nextAddress; // address to next node; which is of datatype, node
};
node *head = NULL, *current = NULL;

// TODO: understand the functionality
void displayList()
{
	node *index = head;
	while (index != NULL)
	{
		cout << index->data << '\n';
		index = index->nextAddress;
	}
}

void insertFirst(int data)
{
	node *link;
	link = (node *)malloc(sizeof(node)); // Memory allocated with data type & size (sizeof(data_type))
	link->data = data;
	link->nextAddress = head;
	head = link;
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
	insertFirst(5);
	insertFirst(10);
	insertFirst(15);
	insertFirst(40);
	// insertFirst(20);
	// insertFirst(40);
	displayList();
	return 0;
}