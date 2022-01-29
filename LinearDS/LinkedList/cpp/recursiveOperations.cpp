// accept a linked list & return reversed linked list
struct node *reverse(node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	node *ptr = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return ptr;
}

// accepts two sorted linked lists & return sorted merged linked list
node *sortedMerge(node *A, node *B) {
	// base case
	if (A == NULL)	return B;
	if (B == NULL)	return A;

	// recursion
	if (A->data <= B->data)	{
		A->next = sortedMerge(A->next, B);
		return A;
	} else {
		B->next = sortedMerge(A, B->next);
		return B;
	}
}

// TODO: implement sort() using recursion
