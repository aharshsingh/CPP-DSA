//Function for finding the floor of the BST.
//It will get arugments root node and key for the floor and it will return node.
//struct node{
//	int val;
//	node *left = NULL;
//	node *right = NULL;
//};
node *floor(node *root, int key){
	node *curr = root;
	int floor_val = INT_MIN;
	node *floor = NULL;
	while(curr != NULL){
		if(curr -> val == key)
			return root;
		else if(key > curr -> val){
			if(floor_val < curr -> val)
				floor_val = curr -> val;
			floor = curr;
			curr = curr -> right;
		}
		else{
			curr = curr -> left;
		}
	}
	return floor;
}
