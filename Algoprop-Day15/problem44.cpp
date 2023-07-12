class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        int index = 0;
        int fuel_in_tank = startFuel;
        int refuels = 0;

        priority_queue<int> pq;
       
        while(fuel_in_tank < target){
    
            while(index < stations.size() && stations[index][0] <= fuel_in_tank){
                pq.push(stations[index][1]);
                index++;
            } 

            if(pq.empty()){
                return -1;
            }
            
            fuel_in_tank += pq.top();
            pq.pop();
            refuels++;
            
        }
        return refuels;
    }
};
        