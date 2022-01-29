#include <iostream>
#include "MergeSort.cpp"
using namespace std;
int main()
{

	int testArray[] = {9, 8, 7, 5, 6, 3, 2, 1, 0, 4};
	mergeSort(testArray, 0, 9);
	cout << "Sorted Array : ";
	for (int i = 0; i <= 9; i++)
	{
		cout << testArray[i] << " ";
	}
	return 0;
}