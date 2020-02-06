#include "BST.h"
#define MAX_SIZE 1000

class ArrayBST:public BST{
	public:
		void add(int data);
		void preorderTraversal();
		bool search();
	
	private:
		int data[MAX_SIZE];
};
