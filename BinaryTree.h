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

template <typename T>
class BinaryTree
{
    private:
    //embedded struct
        struct TreeNode
        {
            T value;
            TreeNode* leftPtr;
            TreeNode* rightPtr;
        };

        TreeNode* rootPtr;

    //functions
        void insert(TreeNode *&nodePtr, TreeNode *&newNode)
        {
            if (nodePtr == nullptr)
            {
                nodePtr = newNode;
            }
            else if (newNode->value < nodePtr->value)
            {
                insert(nodePtr->leftPtr, newNode);
            }
            else
            {
                insert(nodePtr->rightPtr, newNode);
            }
        };
        void destroySubTree(TreeNode* nodePtr)
        {
            if(nodePtr)
            {
                if (nodePtr->leftPtr)
                {
                    destroySubTree(nodePtr->leftPtr);
                }
                if (nodePtr->rightPtr)
                {
                    destroySubTree(nodePtr->rightPtr);
                }
                delete nodePtr;
            }
        };
        void displayInOrder(TreeNode* nodePtr) const
        {
            if(nodePtr)
            {
                displayInOrder(nodePtr->leftPtr);
                cout << nodePtr->value << endl;
                displayInOrder(nodePtr->rightPtr);
            }
        };

    public:
    //constructors
        //default
        BinaryTree()
        {
            rootPtr = NULL;
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
        void insertNode(T item)
        {
            TreeNode *tempPtr = nullptr;

            tempPtr = new TreeNode;
            tempPtr->value = item;
            tempPtr->leftPtr = tempPtr->rightPtr = nullptr;

            insert(rootPtr, tempPtr);
        };
        void displayInOrder()
        {
            displayInOrder(rootPtr);
        };
        bool searchNode(T item)
        {
            TreeNode *nodePtr = rootPtr;

            while(nodePtr)
            {
                if(nodePtr->value == item)
                {
                    return true;
                }
                else if (item < nodePtr->value)
                {
                    nodePtr = nodePtr->leftPtr;
                }
                else
                {
                    nodePtr = nodePtr->rightPtr;
                }
            }
            return false;
        };

};

#endif