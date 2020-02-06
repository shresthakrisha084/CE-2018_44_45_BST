#include "ArrayBST.h"
#include <iostream>
using namespace std;

ArrayBST::ArrayBST()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		this->element[i] = 0;
	}
}

ArrayBST::~ArrayBST()
{
}

void ArrayBST::add(int data)
{
	if (this->element[1] == -1)
	{
		element[1] = data;
	}
	else
	{
		for (int i = 1; i <= MAX_SIZE;)
		{
			if (data < this->element[i])
			{
				i = 2 * i;
			}
			else
			{
				i = 2 * i + 1;
			}
			if (this->element[i] == -1)
			{
				this->element[i] = data;
				break;
			}
		}
	}
	cout << "Pushed mf";
}

/*bool ArrayBST::search(){}
void ArrayBST::preorderTraversal(){}
int ArrayBST:: min(){}
int ArrayBST::max(){}*/

// int main()
// {

// 	ArrayBST a;
// 	a.add(5);
// 	a.add(7);
// 	a.add(4);
// 	a.add(1);
// 	a.add(8);
// }
