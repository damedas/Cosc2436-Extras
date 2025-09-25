#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
   int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        return preorder(root,result); 
    }
    vector<int> preorder(TreeNode* root, vector<int>& result){
        if (root!=nullptr){
            result.push_back(root->val);
            preorder(root->left,result);
            preorder(root->right,result);
        }
        return result; 
    }