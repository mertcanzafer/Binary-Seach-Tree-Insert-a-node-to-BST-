#include <iostream>
#include <string>
using namespace std;

const char* BinarySeachTreeWeb  = "https://www.geeksforgeeks.org/introduction-to-binary-search-tree-data-structure-and-algorithm-tutorials/";

// Insert a node into a BST

struct Node {

	int key;
	Node* left, *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->key = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Insert a new Node to a BST

Node* Insert(Node* node, int key)
{
	if (node == NULL) return newNode(key);

	if (key < node->key)
	{
		node->left = Insert(node->left, key);
	}
	else if (key > node->key) {
		node->right = Insert(node->right, key);
	}

	return node;
}

// We are going to have to traversa our tree. You can do it by Inorder left - data -right

void Inorder(Node* root)
{
	if (root != NULL)
	{
		Inorder(root->left);
		cout << root->key << " ";
		Inorder(root->right);
	}
}


int main()
{

	 Node* root = NULL;

	 root = Insert(root, 50);

	 root = Insert(root, 30);
	 root = Insert(root, 20);
	 root = Insert(root, 40);
	 root = Insert(root, 70);
	 root = Insert(root, 60);
	 root = Insert(root, 80);

	Inorder(root);
	
	delete root;
	return 0;
}