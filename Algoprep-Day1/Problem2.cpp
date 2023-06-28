class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> result(nums.size());

        int left=0;
        int right=nums.size()-1;
        int index=nums.size()-1;

    while(left <= right){

        int leftsquare = nums[left] * nums[left];
        int rightsquare = nums[right] * nums[right];

        if (leftsquare >= rightsquare){
            result[index]=leftsquare;
            left++;
        }else{
            result[index]=rightsquare;
            right--;
        }
        index--;
    }
    
    return result;

    }
};