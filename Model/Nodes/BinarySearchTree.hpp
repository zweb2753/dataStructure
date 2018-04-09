//
//  BinarySearchTree.hpp
//  dataStructure
//
//  Created by Weber, Zane on 4/9/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>
#include "Tree.hpp"
#include <iostream>

using namspace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * inStart);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);

    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Tyype itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}
    
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}


template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * 
}



#endif /* BinarySearchTree_hpp */
