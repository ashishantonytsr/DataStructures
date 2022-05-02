#include "operations.cpp"
#include "recursiveOperations.cpp"

int main()
{
	int dataInput1[] = {40,36,30,26,20,16,6,2};
	node *list1 = NULL;
	for (int i = 0; i < 8; i++)
		list1 = insertFirst(list1, dataInput1[i]);
	int dataInput2[] = {3, 6, 8, 10, 13, 19, 22, 25};
	node *list2 = NULL;
	for (int i = 0; i < 8; i++)
		list2 = insertLast(list2, dataInput2[i]);

	displayList(list1);
	displayList(list2);

	// node *mergedlist = sortedMerge(list1, list2);
	// displayList(mergedlist);

	// list1 = insertAt(list1, 4, 18);
	// displayList(list1);

	// displayList(list1);
	// std::cout<<'\n'<<searchNode(list1, 30);

	// node *reversedlist = reverse(list2);
	// std::cout << "Reversed Linked List : ";
	// displayList(reversedlist);
}