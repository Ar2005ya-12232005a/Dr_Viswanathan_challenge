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


class Solution {
public:
    bool dfs(TreeNode* root, int currentSum, int targetSum) {
        if (!root) return false;

        currentSum += root->val;

        if (!root->left && !root->right) {
            return currentSum == targetSum;
        }

        return dfs(root->left, currentSum, targetSum) ||
               dfs(root->right, currentSum, targetSum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, 0, targetSum);
    }
};