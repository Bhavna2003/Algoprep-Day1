class Solution {
public:

void helper(vector<int>& candidates, int target, int i, int currSum, vector<int> &temp, vector<vector<int>>& ans){
    if(currSum > target){
        return;
    }
    if (i == candidates.size()){
        if(currSum == target){
            ans.push_back(temp);
        }
        return;
    }
    currSum += candidates[i];
    temp.push_back(candidates[i]);
    helper(candidates, target, i, currSum, temp, ans);
    currSum -= candidates[i];
    temp.pop_back();
    helper(candidates, target, i+1, currSum, temp, ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        helper(candidates, target, 0, 0, temp, ans);
        return ans;
    }
};