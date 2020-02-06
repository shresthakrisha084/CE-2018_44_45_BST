#ifndef ArrayBST_h
#define ArrayBST_h

#include "BST.h"

#define MAX_SIZE 1000

class ArrayBST : public BST
{
public:
	void add(int data);
	void preorderTraversal();
	bool search();

private:
	int element[MAX_SIZE];
};

#endif