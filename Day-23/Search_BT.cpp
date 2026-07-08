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
    TreeNode* searchBST(TreeNode* root, int val) {

        while (root != NULL) {

            if (root->val == val)
                return root;

            if (val < root->val)
                root = root->left;
            else
                root = root->right;
        }

        return NULL;
    }
};