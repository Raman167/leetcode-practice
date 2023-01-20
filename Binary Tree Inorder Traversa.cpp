

class Solution {
public:
void traverse(TreeNode* root,vector<int>&a)
{
    if(root!=NULL)
    {
        traverse(root->left,a);
        a.push_back(root->val);
        traverse(root->right,a);
    }
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>a;
        traverse(root,a);
        return a;
        
    }



