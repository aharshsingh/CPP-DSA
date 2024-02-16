//Function for finding the ceiling of the BST.
//It will get arugments root node and key for the floor and it will return node.
//struct node{
//	int val;
//	node *left = NULL;
//	node *right = NULL;
//}; 

node *ceiling(node *root, int key){
	node *curr =root;
	int ceil_val = INT_MAX;
	node *ceil = NULL;
	while(curr != NULL){
	if(curr == NULL)
		return NULL;
	else if(key > curr -> val)
		curr = curr -> right;
	else{
		if(ceil_val > curr -> val)
			ceil_val = curr -> val;
		ceil = curr;
		curr = curr -> right;
	}
	}
	return ceil;
}
