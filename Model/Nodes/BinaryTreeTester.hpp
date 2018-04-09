//
//  BinaryTreeTester.hpp
//  dataStructure
//
//  Created by Weber, Zane on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp


#include "../Model/Nodes/BinaryTreeNode.hpp"
#include <stdio.h>
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuf();
};

#endif /* BinaryTreeTester_hpp */
