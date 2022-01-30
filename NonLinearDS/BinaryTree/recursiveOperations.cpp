struct node{
	int data;
	node *left;
	node *right;
};

// to insert data into tree
node *insertion(node* root, int idata){
	if (root == NULL){
		node *newNode;
		// allocating memory with data type & size (sizeof(data_type))
		newNode = (node *)malloc(sizeof(node)); 
		newNode->data = idata;
		newNode->left = NULL;	newNode->right = NULL;
		return newNode;
	}

	if (idata < root->data)
		root->left = insertion(root->left,idata);
	else 
		root->right = insertion(root->right, idata);

	return root;
}

// to print leaves using Depth-First-Search Method
void printLeafNodes(node* root){
	if (root == NULL) return;

	// no children / leaf node
	if (root->left == NULL && root->right == NULL){
		std::cout<<root->data<<" "; 
		return;
	}

	if (root->left != NULL)
		printLeafNodes(root->left);
	if (root->right != NULL)
		printLeafNodes(root->right);
}