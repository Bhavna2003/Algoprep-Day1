class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum=0;

        if(*max_element(nums.begin(), nums.end()) < 0){
            return *max_element(nums.begin(), nums.end());
        }

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            
            if(sum<0){
                sum = 0;
            }
            if(sum>max){
                max = sum;
            }
        }

        return max;
    }
};