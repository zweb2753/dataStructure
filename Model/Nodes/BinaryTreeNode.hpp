//
//  BinaryTreeNode.hpp
//  dataStructure
//
//  Created by Weber, Zane on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <stdio.h>
#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
    
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * root);
    void setLeftNode(BinaryTreeNode<Type> * root);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
    
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTrreeNoe() : Node,Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * newRoot)
{
    this->right = right;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> * newRoot)
{
    this->left = left;
}

#endif /* BinaryTreeNode_hpp */
