class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        int area=0;
       
        while(j>i){
           if(height[i]>height[j]){
               area = max(area, (j-i)*height[j]);
               j--;
           }
           else{
               area = max(area, (j-i)*height[i]);
               i++;
           }
        }
        return area;
    }
};