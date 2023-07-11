class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // using max heap
        priority_queue<int> pq(nums.begin(), nums.end());
        int ans = 0;
        while(k--){
            ans = pq.top();
            pq.pop();
        }
        return ans;


        //using min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
            if(pq.size() > k){
                pq.pop();
            }   
        }
        int ans = pq.top();
        return ans;
    }
};