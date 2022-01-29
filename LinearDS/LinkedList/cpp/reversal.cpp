#include <iostream>
using namespace std;

// accept a linked list & return reversed linked list
// linked list is reversed using recursion
struct node *linkedListReversal(node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	node *ptr = linkedListReversal(head->next);
	head->next->next = head;
	head->next = NULL;
	return ptr;
}
