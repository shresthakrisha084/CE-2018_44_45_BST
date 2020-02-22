#include "LinkedBST.cpp"
#include "ArrayBST.cpp"

int main()
{
    std::cout << "\tBinary Search Tree as Linked List\n"
              << "-------------------------------------------------\n";

    // lets us assume the following tree
    /*
                     55
                  /      \
                21        122
              /   \       /  \
            11     33   111   136
                    \    
                     47
    */

    LinkedBST lBST; //creating Linked BST instance
    //add
    std::cout << "\nAdding data to tree.\n";
    lBST.addData(55);
    lBST.addData(122);
    lBST.addData(136);
    lBST.addData(21);
    lBST.addData(11);
    lBST.addData(33);
    lBST.addData(47);
    lBST.addData(111);

    //traverse
    std::cout << "\nPreorderTraversal: ";
    lBST.preorderTraversal();
    std::cout << "\nPostorderTraversal: ";
    lBST.postorderTraversal();
    std::cout << "\nInorderTraversal: ";
    lBST.inorderTraversal();

    std::cout << "\n\nDeleing data from tree.\n";
    //let us delete four datas corresponding to
    // node with null, left, right, both childs
    lBST.deleteData(55);  //both chilren
    lBST.deleteData(136); //left child only after deleting 122
    lBST.deleteData(33);  //right child only
    lBST.deleteData(47);  //no child

    //traverse
    std::cout << "\nPreorderTraversal: ";
    lBST.preorderTraversal();
    std::cout << "\nPostorderTraversal: ";
    lBST.postorderTraversal();
    std::cout << "\nInorderTraversal: ";
    lBST.inorderTraversal();

    //search
    std::cout << "\n";
    //1st data
    int query = 11;
    bool found = lBST.search(query);
    if (found)
        std::cout << "\nSearched data (" << query << ") FOUND in tree.";
    else
        std::cout << "\nSearched Data (" << query << ") NOT found in tree.";
    //2nd data
    int query2 = 14;
    bool found2 = lBST.search(query2);
    if (found2)
        std::cout << "\nSearched data (" << query2 << ") FOUND in tree.";
    else
        std::cout << "\nData (" << query2 << ") NOT found in tree.";

    //MIN/MAX
    std::cout << "\n";
    std::cout << "\nMinimum sized data in tree:" << lBST.min(); //min
    std::cout << "\nMaximum sized data in tree:" << lBST.max(); //max

    std::cout << "\n...................................................................................\n";

    std::cout
        << "\n\tBinary Search Tree as Array\n"
        << "-------------------------------------------------\n";

    ArrayBST a;
    //add
    std::cout << "\nAdding data to tree.\n";
    a.addData(55);
    a.addData(122);
    a.addData(136);
    a.addData(21);
    a.addData(11);
    a.addData(33);
    a.addData(47);
    a.addData(111);

    // lets us assume the following tree
    /*
                     55
                  /      \
                21        122
              /   \       /  \
            11     33   111   136
                    \    
                     47
    */
    std::cout << endl;
    if (a.search(3))
    {
        std::cout << "\nsearched data 3 is in the BST." << endl;
    }
    
    std::cout << endl;
    a.preorderTraversal();
    a.inorderTraversal();
    
    std::cout << endl;
    std::cout << "The maximum value in the tree is " << a.max() << endl;
    std::cout << "The minimum value in the tree is " << a.min() << endl;
    
    std::cout << endl;
    a.deleteData(11);
    a.preorderTraversal();
    a.deleteData(23);
    a.inorderTraversal();
    std::cout << endl;

    return 0;
}