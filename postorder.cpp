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

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        return PostOrder(root,result); 
    }
    vector<int> PostOrder(TreeNode* root,vector<int>& result){
        if (root!=nullptr){
            PostOrder(root->left,result);
            PostOrder(root->right,result);
            result.push_back(root->val);
        }
        return result;
    }