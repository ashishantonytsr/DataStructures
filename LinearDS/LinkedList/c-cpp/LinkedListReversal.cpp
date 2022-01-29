#include <iostream>
#include "linkedListNode.cpp"
using namespace std;

struct node *linkedListReversal(node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	node *ptr = linkedListReversal(head->next);
	head->next->next = head;
	head->next = NULL;
	return ptr;
}
