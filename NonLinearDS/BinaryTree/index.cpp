#include <iostream>
#include "recursiveOperations.cpp"
int main(){
	int dataInput[] = {100,80,50,90,30,60,90,85,95,120,110,108,115,140,150};
	node *tree = NULL;
	for (int i=0; i<15; i++){
		tree = insertion(tree,dataInput[i]);
	}
	std::cout<<"leaf nodes : ";
	printLeafNodes(tree);
}