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
    int ans = 0;
    int count = 0;

    void inorder(TreeNode* root, int k) {
        if (root == NULL)
            return;

        inorder(root->left, k);

        count++;
        if (count == k) {
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};