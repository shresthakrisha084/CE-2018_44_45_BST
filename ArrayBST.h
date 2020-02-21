#ifndef ArrayBST_h
#define ArrayBST_h

#include "BST.h"

#define MAX_SIZE 20

class ArrayBST : public BST
{
public:
	void add(int data);
	void preorderTraversal();
	bool search(int data);
	void inordertraversal() = 0;
    void deleteitem(int data) = 0;
	int minimum()=0;
	int maximum()=0;



private:
	int element[MAX_SIZE];
};

#endif
