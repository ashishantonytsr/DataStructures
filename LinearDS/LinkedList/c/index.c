#include "operations.c"

void main()
{
	int dataInput1[] = {40, 36, 30, 26, 20, 16, 6, 2};
	node *list1 = NULL;
	for (int i = 0; i < 8; i++)
		list1 = insertFirst(list1, dataInput1[i]);
	displayList(list1);
}