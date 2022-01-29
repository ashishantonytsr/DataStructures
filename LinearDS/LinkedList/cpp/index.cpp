#include <iostream>
#include "node.cpp"
#include "operations.cpp"
#include "reversal.cpp"
#include "sortedMerge.cpp"
using namespace std;

int main()
{
	node *list = NULL;
	list = insertFirst(list, 1);
	list = insertFirst(list, 8);
	list = insertFirst(list, 22);
	list = insertFirst(list, 40);

	node *list2 = NULL;
	list2 = insertFirst(list2, 4);
	list2 = insertFirst(list2, 11);
	list2 = insertFirst(list2, 16);
	list2 = insertFirst(list2, 20);

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