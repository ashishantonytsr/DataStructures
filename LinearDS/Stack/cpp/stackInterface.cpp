#include <iostream>
#include "stack.cpp"
using namespace std;
int main()
{
	int option;
	cout << "Enter the size of stack : ";
	cin >> stackSize;
	int stack[stackSize];
	do
	{
		cout << "\n\nSelect from below\n1. Display\n2. PUSH\n3. POP\n4. SEARCH\n0. Exit\n";
		cin >> option;
		int number;
		switch (option)
		{
		case 1:
			display(stack);
			break;

		case 2:
			cout << "Enter the number to push : ";
			cin >> number;
			push(stack, number);
			break;

		case 3:
			pop(stack);
			break;

		case 4:
		{
			cout << "Enter the number to search : ";
			cin >> number;
			int searchResult = search(stack, number);
			if (searchResult == -1)
				cout << number << " not found\n";
			else
				cout << number << " found at location " << searchResult << endl;
			break;
		}

		default:
			break;
		}

	} while (option != 0);
}
