#include <bits/stdc++.h>
#include <iostream>
#include <utility>
using namespace std;


struct TreeNode{
    int val;
    
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};



    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }
