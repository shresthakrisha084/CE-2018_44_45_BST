#include "BST.h"

class Node {
	int data;
	Node*  left;
	Node*  right;
};

enum Traversal{
	PreTVR,
	PostTVR,
	InTVR
};

class LinkedBST: public BST{
	private:
		Node *root;
		void add(Node* &root, int data);
		bool find(Node* &subtree, int targetKey);
		void traverse(Node* root);
	
	public:
		LinkedBST();

		void add(int data);
		void preOrderTraversal();
		bool search(int data);
		int min();
		int max();

};
