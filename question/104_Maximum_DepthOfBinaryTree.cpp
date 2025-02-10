//
// Created by Cc on 2025/2/10.
//


/**
* Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 3
Example 2:

Input: root = [1,null,2]
Output: 2


**/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    int maxDepth_bfs(TreeNode* root){
        // define a int number to restore the max depth of  tree
        if(root == nullptr)return 0;
        int maxDepth = 0;
        // initialize a queue
        deque<TreeNode*> queue;
        queue.push_back(root);
        while(!queue.empty()){
            int parentCount = queue.size();
            while(parentCount>0){
                TreeNode* node = queue.front();
                queue.pop_front();
                if(node->left) {queue.push_back(node->left);}
                if(node->right) {queue.push_back(node->right);}
                parentCount --;
            }

            maxDepth++;
            queue.erase(queue.begin(),queue.begin()+parentCount);
        }
        return maxDepth;

    }


    int maxDepth_dfs(TreeNode* root){
         if(root == nullptr) return 0;
         return max(maxDepth_dfs(root->left),maxDepth_dfs(root->right)) +1;
    }
};

int main(){
    Solution solution;
}