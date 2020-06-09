

//https://leetcode.com/problems/balanced-binary-tree/

//110. Balanced Binary Tree







/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool value  = true;

    int  Utilsbalanced(TreeNode* root ){
    if(root == NULL)
        return 0;
   
    int lh = Utilsbalanced(root->left);
    int rh = Utilsbalanced(root->right);
    
    if(abs(lh-rh)>1){
       
        value =  false;
        
        }
    int res = max(lh,rh);
    return res+1;
    
    }
    bool isBalanced(TreeNode* root) {
        value = true;
        int res = Utilsbalanced(root);
        //cout<<value<<endl;
        return value;
        
        
    }
};
