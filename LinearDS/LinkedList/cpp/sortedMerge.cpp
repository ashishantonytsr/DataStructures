#include <iostream>
using namespace std;

// accepts two sorted linked lists & return sorted merged linked list
node *sortedMerge(node *A, node *B)
{
	// base case
	if (A == NULL)
		return B;
	if (B == NULL)
		return A;

	// recursion
	if (A->data <= B->data)
	{
		A->next = sortedMerge(A->next, B);
		return A;
	}
	else
	{
		B->next = sortedMerge(A, B->next);
		return B;
	}
}
