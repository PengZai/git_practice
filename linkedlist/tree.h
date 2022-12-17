#ifndef TREE_H
#define TREE_H


class TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode():val(0),left(nullptr),right(nullptr){};
  TreeNode(int val ):val(val),left(nullptr),right(nullptr){};
  TreeNode(int val, TreeNode* left, TreeNode* right):val(0),left(left),right(right){};

  
};


#endif TREE_H