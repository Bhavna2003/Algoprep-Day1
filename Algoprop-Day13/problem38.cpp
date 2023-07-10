class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp1,mp2;
        int plen=p.size();
        vector<int> ans;
        for(int i=0;i<plen;i++){
            mp1[p[i]]++;
            mp2[s[i]]++;
        }
        if(mp1==mp2){
            ans.push_back(0);
        }
        for(int i=plen;i<s.size();i++){
            mp2[s[i]]++;
            mp2[s[i-plen]]--;
            if(mp2[s[i-plen]]==0){ 
                mp2.erase(s[i-plen]);
            }        
            if(mp1==mp2){
                ans.push_back(i-plen+1);
            }
        }
        return ans;
    }
};