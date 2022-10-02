/*
problem:
********
Given a generic tree, print the post-order traversal of given tree.
The post-order traversal is: visit child nodes first and then root node.

Sample Input 1:
10 3 20 30 40 2 400 50 0 0 0 0 

Sample Output 1:
400 50 20 30 40 10
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode 
{
};


TreeNode<int>* takeInputLevelWise()
{
}


void printPostOrder(TreeNode<int>* root) 
{
   // Write your code here
   if (root == NULL)
      return;
   for (int i = 0; i < root->children.size(); i++)
      printPostOrder(root->children[i]);
   cout << root->data << " ";
}


int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   printPostOrder(root);
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************














