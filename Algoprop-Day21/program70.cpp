class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        stack<TreeNode*>st;

        while (root != NULL || !st.empty()){
            if (root != NULL){
                st.push(root);
                root = root->left;
            }else{   
                root = st.top();
                st.pop();
                inorder.push_back(root->val);
                root = root->right;
            }
        }
        return inorder;
    }
};