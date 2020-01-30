#include "virtual class.h"
#define Max_SIZE 1000

class ArrayBST::public BST
{
	public:
		virtual void add(int data);
			virtual void preorder traversal();
			virtual	bool search();
	private:
		int data[MAX_SIZE];
};
