#include "binarytree.h"
#define MAX_SIZE 40

class ArrayBST : public BinarySearchTree
{

    public:
        int elements[MAX_SIZE];
        ArrayBST();
        ~ArrayBST();
        void preorderTraversal();
        void add(int data);
        bool search(int data);
        int max();
 		 int min();
 		void remove(int data);
 		void inorder(int x);
};



