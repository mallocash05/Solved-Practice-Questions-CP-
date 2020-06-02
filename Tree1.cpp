//Binary Tree Right Side View

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
int maxl = 0;
vector<int> Fvec;

void utilsrightsideview(TreeNode * root , int CurL)
{
    if(root == NULL)
        return;
    if(maxl<CurL)
    {
        Fvec.push_back(root->val);
        maxl = CurL;
    }
    utilsrightsideview(root->right,CurL+1);
    utilsrightsideview(root->left,CurL+1);
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        Fvec.clear();
        maxl = 0;
        
        int curL  = 1;
        utilsrightsideview(root,curL);
        return Fvec;
        
        
    }
};
