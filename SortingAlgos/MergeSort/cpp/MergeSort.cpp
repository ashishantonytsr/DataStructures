#include <iostream>
using namespace std;

// merge splitted single elemented arrays into one array
void merge(int array[], int start, int end, int mid)
{
	// creating temporary array to store sorted items; of size end-start+1
	int temp[end - start + 1];
	int i = start, j = mid + 1, k = 0;

	// checking & adding smallest item to temp
	while (i <= mid && j <= end)
	{
		if (array[i] <= array[j])
		{
			temp[k] = array[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = array[j];
			k++;
			j++;
		}
	}

	// adding rest of the left array to temp
	while (i <= mid)
	{
		temp[k] = array[i];
		k++;
		i++;
	}

	// adding rest of the right array to temp
	while (j <= end)
	{
		temp[k] = array[j];
		k++;
		j++;
	}

	// to add items in temp to array
	for (int i = start; i <= end; i++)
	{
		array[i] = temp[i - start];
	}
}

// splits the input array into array with single elements; using recursion
void mergeSort(int array[], int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		// left half of array
		mergeSort(array, start, mid);
		// right half of array
		mergeSort(array, mid + 1, end);
		merge(array, start, end, mid);
	}
}
