class Solution
{
    public:
    
    // Function for finding maximum AND value.
    int maxAND (int arr[], int N)
    {
        int ans=0;

        for(int i=31;i>=0;i--){
            int k=0;
            for(int j=0;j<N;j++){
                if((arr[j]&(1<<i))!=0){
                     if((arr[j]&ans)==ans)
                        k++;
                }
            }

            if(k>=2){
                ans+= (1<<i);
            }
        }
        return ans;
    }
};