#include "BST.h"

class Node{
	public:
		//node data
		int data;

		//subtree/child pointers
		Node*  left;
		Node*  right;

		//constructor
		Node(){
			data=0;
			left=NULL;
			right=NULL;
		}
};


class LinkedBST: public BST{
	//private functions
	private:
		//insert node to specific subtree
		void insert(Node* &subtree, Node* newNode);
		bool find(Node* &subtree, int targetKey);
		void traverse(Node* root, Traversal Type);
	
	//public function
	public:
		Node* root;
		LinkedBST();

		void add(int dataUser);
		void add(Node* &root, int dataUser);

		void preorderTraversal();
		void postorderTraversal();
		void inorderTraversal();
		
		bool search(int dataUser);
		
		int min();
		int max();

};

enum Traversal{
	PreTV,
	PostTV,
	InTV
};