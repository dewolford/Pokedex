//**************************************
// Title:   BinaryTree.h
// Purpose: hold the binary tree class
//          and functions of said class
//**************************************

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Pokemon.h"

using namespace std;

class BinaryTree
{
    private:
        struct TreeNode
        {
            Pokemon value;
            TreeNode* leftPtr;
            TreeNode* rightPtr;
        };

        TreeNode* rootPtr;

        //functions
        void insert(TreeNode);
        void destroySubTree(TreeNode);
        void displayInOrder(TreeNode);

    public:
        //constructors
        BinaryTree();           //default
        BinaryTree(TreeNode*);  //overloaded

        //destructor
        ~BinaryTree();

        //other functions
        void insertNode(TreeNode);
        void displayInOrder();
        bool searchNode(TreeNode);

};

#endif