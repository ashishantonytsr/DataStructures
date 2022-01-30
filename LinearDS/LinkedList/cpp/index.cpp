#include "operations.cpp"
#include "recursiveOperations.cpp"

int main()
{
	int dataInput1[] = {40,36,30,26,20,16,6,2};
	node *list1 = NULL;
	for (int i=0; i<8; i++)
		list1 = insertFirst(list1, dataInput1[i]);

	int dataInput2[] = {25,22,19,13,10,8,6,3};
	node *list2 = NULL;
	for (int i=0; i<8; i++)
		list2 = insertFirst(list2, dataInput2[i]);

	node *mergedlist = sortedMerge(list1, list2);
	displayList(mergedlist);

	// cout<<"Linked List : ";
	// displayList(list);

	// node *reversedlist = reverse(list);
	// cout << "Reversed Linked List : ";
	// displayList(reversedlist);
}