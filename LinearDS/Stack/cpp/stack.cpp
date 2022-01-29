#include <iostream>

int endPointer = -1;

void display(int stack[]) {
	if (endPointer == -1)
		std::cout << "\n\tStack Empty";
	else {
		std::cout << std::endl
							<< '\t';
		for (int i = 0; i <= endPointer; i++)
			std::cout << stack[i] << " ";
	}
	std::cout << std::endl;
}

void push(int stack[], int stackSize, int item) {
	if (endPointer < stackSize - 1) {
		endPointer++;
		stack[endPointer] = item;
		std::cout << "Pushed item : " << item << std::endl;
	} else {
		std::cout << "\n\tError : Stack OverFlow";
	}
}

void pop(int stack[]) {
	if (endPointer < 0)
		std::cout << "\n\tError : Stack UnderFlow";
	else {
		int poppedItem = stack[endPointer];
		std::cout << "Popped item " << poppedItem << std::endl;
		endPointer--;
	}
}

void search(int stack[], int item) {
	for (int i = 0; i <= endPointer; i++)
		if (item == stack[i]) {
			std::cout << item << " found at location " << i + 1;
			return;
		}
	std::cout << item << " not found";
}
