//link : https://leetcode.com/problems/minimum-depth-of-binary-tree
//111. Minimum Depth of Binary Tree


//Solution 

int minDepth(TreeNode* root) {

    if(root == NULL)
        return 0;		
	int l = minDepth(root->left);
    int r = minDepth(root->right);
    int res = min(l,r);
    if((l==0 && r!=0 )||( r==0 && l != 0)) //if subtree is skewed then right or left do not have any leaf node . so take maximum 
    {
        return max(l,r)+1;
        
    }
    else 
        return res+1;
    
}
