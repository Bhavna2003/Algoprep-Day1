class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();

        vector<int> rmin (n+1, 0);
        rmin[n] = INT_MAX;
        int val = INT_MAX;
        for(int i = n-1; i>=0; i--){
            if (arr[i] < val){
                val = arr[i];
            }
            rmin[i] = val;
        }

        int lmax=INT_MIN;
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i] > lmax){
                lmax = arr[i];
            }
            if(lmax <= rmin[i+1]){
                count++;
            }
        }
        return count;
    }
};