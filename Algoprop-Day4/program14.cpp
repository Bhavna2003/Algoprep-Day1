class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmax(n,height[0]);
        vector<int> rmax(n,height[n-1]);

        for(int i=1;i<n-1;i++){
            int temp=max(height[i],lmax[i-1]);
            lmax[i]=temp;
        }

        for(int i=n-2;i>=0;i--){
            int temp=max(height[i],rmax[i+1]);
            rmax[i]=temp;
        }

        int ans=0;
        for(int i=1;i<n-1;i++){
            ans += min(lmax[i],rmax[i])-height[i];
        }

        return ans;

    }
};