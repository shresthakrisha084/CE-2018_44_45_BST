#ifndef BinaryTree_h
#define BinaryTree_h

class BST{
public:
    virtual void preorderTraversal()=0;
    virtual void add(int data)=0;
    virtual bool search(int data)=0;

    virtual int min()=0;

    virtual int max()=0;

};

#endif 
