class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root==NULL)return ans;
       
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()){
            int size= q.size();
            int ele;
            for (int i=0; i<size; i++){
                ele= q.front()->val;  
                if (q.front()->left){
                    q.push(q.front()->left);
                }
                if (q.front()->right){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(ele);
        }
        return ans;
    }
};