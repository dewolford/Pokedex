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
    //embedded struct
        struct TreeNode
        {
            Pokemon value;
            TreeNode* leftPtr;
            TreeNode* rightPtr;
        };

        TreeNode* rootPtr;

    //functions
        void insert(TreeNode*)
        {

        };
        void destroySubTree(TreeNode*)
        {

        };
        void displayInOrder(TreeNode*)
        {

        };

    public:
    //constructors
        //default
        BinaryTree()
        {
            rootPtr = nullptr;
        };
        //overloaded      
        BinaryTree(TreeNode* tempPtr)
        {
            rootPtr = tempPtr;
        };

    //destructor
        ~BinaryTree()
        {
            destroySubTree(rootPtr);
        };

    //other functions
        void insertNode(TreeNode* tempPtr)
        {
            tempPtr = new TreeNode;
            insert(tempPtr);
        };
        void displayInOrder()
        {
            displayInOrder(rootPtr);
        };
        bool searchNode(TreeNode* tempPtr)
        {
            /*  iterate through tree                */
            /*  return true if tempPtr is found     */
            /*  return fals if not found            */
        };

};

#endif