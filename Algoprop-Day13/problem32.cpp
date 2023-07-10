class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n = wall.size();
        int ans = 0;
        int maxi = 0;
        
        unordered_map<int, int> map;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<wall[i].size()-1; j++){
                sum += wall[i][j];
                map[sum]++;
                maxi = max(maxi, map[sum]); 
            }
        }
        ans = n-maxi;
        
        return ans;
    }
};