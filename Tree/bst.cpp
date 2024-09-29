#include<iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};


node* createNode(int data) {
	node* temp = new node;
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}



node* addBST(node* root,int data) {
	if(root == NULL) {
		node* newNode = createNode(data);
		return newNode;
	}
	
	if(data < root -> data)
		root -> left =  addBST(root -> left,data);
	
	else
		root -> right = addBST(root -> right,data);
}



node* findLargestBST(node* root) {
	if(root -> right == NULL)
		return root;
	
	return findLargestBST(root -> right);
}

node* findSmallestBST(node* root) {
	if(root -> left == NULL)
		return root;
	
	return findLargestBST(root -> left);
}



bool deleteBST(node* &root,int key) {
	if(root == NULL)
		return false;
	
	if(key < root -> data)
		return deleteBST(root -> left,key);
	
	else if(key > root -> data)
		return deleteBST(root -> right,key);
	
	else
		if(root -> left == NULL) {
			root = root -> right;
			return true;
		}
		
		else if(root -> right == NULL) {
			root = root -> left;
			return true;
		}
		
		else {
			node* largest = findLargestBST(root -> left);
			root -> data = largest -> data;
			return deleteBST(root -> left,largest -> data);
		}
}



node* searchBST(node* root,int key) {
	if(root == NULL)
		return NULL;
	
	if(key < root -> data)
		return searchBST(root -> left,key);
	
	else if(key > root -> data)
		return searchBST(root -> right,key);
	
	else
		return root;
}



void preOrder(node* root) {
	if(root != NULL){
		cout << root -> data << "\t";
		preOrder(root -> left);
		preOrder(root -> right);
	}
}

void inOrder(node* root) {
	if(root != NULL){
		inOrder(root -> left);
		cout << root -> data << "\t";
		inOrder(root -> right);
	}
}

void postOrder(node* root) {
	if(root != NULL){
		postOrder(root -> left);
		postOrder(root -> right);
		cout << root -> data << "\t";
	}
}
	

int main() {
	node *root = NULL;
	int choice,data;
	node* temp;
	
	do {
	
		cout << "\n1 - Insert\n2 - Delete\n3 - Search\n4 - Find largest\n5 - Find Smallest\n6 - Preorder Traversal\n7 - Inorder Traversal\n8 - Postorder Traversal\n";
		cout << "\nEnter your choice: ";
		cin >> choice;

		switch(choice) {
			case 1:
				cout << "Enter data to insert : ";
				cin >> data;
				root = addBST(root,data);
				cout << "Inserted successfully...\n";
				break;
				
			case 2:
				cout << "Enter data to delete : ";
				cin >> data;
				if(deleteBST(root,data))
					cout << "Deleted Succesfully...\n";
				else
					cout << "Element not found...\n";
				break;
				
			case 3:
				cout << "Enter data to search : ";
				cin >> data;
				if(searchBST(root,data) != NULL) 
					cout << "Element present...\n";
				else
					cout << "Element not present...\n";
				break;
				
			case 4:
				temp = findLargestBST(root);
				cout << "Largest element : " << temp -> data;
				break;
				
			case 5:
				temp = findSmallestBST(root);
				cout << "Smallest element : " << temp -> data;
				break;
				
			case 6:
				cout << "Preorder traversal : \n";
				preOrder(root);
				cout << "\n";
				break;
				
			case 7:
				cout << "Inorder traversal : \n";
				inOrder(root);
				cout << "\n";
				break;
				
			case 8:
				cout << "Postorder traversal : \n";
				postOrder(root);
				cout << "\n";
				break;
				
			default:
				cout << "INVALID CHOICE !!!!";
				break;
		}

	cout << "\nTo continue press 1 : ";
	cin >> choice;
	
	}while(choice == 1);
}


//by shubham pandey