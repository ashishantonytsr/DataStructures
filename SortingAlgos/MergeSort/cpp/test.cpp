#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "MergeSort.cpp"
using namespace std;

bool isSorted(int test[], int len)
{
	for (int i = 1; i < len - 1; i++)
	{
		int left = test[i - 1], right = test[i + 1];
		if ((test[i] < left || test[i] > right))
			return false;
	}
	return true;
}

int main()
{
	srand(time(NULL));
	int arr[100];
	// populating array with random values
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 1000;
	mergeSort(arr, 0, 99);
	// testing...
	isSorted(arr, 100) == 1 ? cout << "\ntest passed" : cout << "\ntest failed";
}
