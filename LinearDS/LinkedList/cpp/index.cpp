#include <iostream>
#include "node.cpp"
#include "operations.cpp"
#include "reversal.cpp"
#include "sortedMerge.cpp"
using namespace std;

int main()
{
	node *list = NULL;
	list = insertFirst(list, 40);
	list = insertFirst(list, 22);
	list = insertFirst(list, 8);
	list = insertFirst(list, 1);

	node *list2 = NULL;
	list2 = insertFirst(list2, 20);
	list2 = insertFirst(list2, 16);
	list2 = insertFirst(list2, 12);
	list2 = insertFirst(list2, 2);

	node *mergedlist = NULL;
	mergedlist = sortedMerge(list, list2);
	displayList(mergedlist);

	// cout<<"Linked List : ";
	// displayList(list);

	// node *reversedlist;
	// reversedlist = linkedListReversal(list);
	// cout << "Reversed Linked List : ";
	// displayList(reversedlist);
	return 0;
}