class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
       
        unordered_map<int, int> map;

        for(int i=0; i<n; i++){    
            map[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(map.find(nums[i]-1)==map.end()){
                int count=1;
                int num=nums[i]+1;
                while(map.find(num)!=map.end()){
                    count++;
                    num++;
                }
                ans=max(ans,count);
            }
            
        }
        return ans;
    }
};