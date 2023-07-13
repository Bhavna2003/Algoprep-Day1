class Solution {
public:

int find_days(vector<int>& weights, int cap){
    int day = 1;
    int load = 0;
    for(int i=0; i < weights.size(); i++){
        if(weights[i] + load > cap){
            day += 1;
            load = weights[i];
        }else{
            load += weights[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {

        int low = 0;
        for(int i=0; i < weights.size(); i++){
            low = max(low, weights[i]);
        };
        int high = 0;
        for(int i=0; i < weights.size(); i++){
            high += weights[i];
        };

        while(low <= high){
            int mid = (low + high) / 2;
            int no_of_days = find_days(weights, mid);
            if(no_of_days <= days){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};