class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>mp;
        int l =0; 
        int r =0;
        int maxfreq =0;
        int res = 0;
        
        while(r<s.size()){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);
            while((r-l+1)-maxfreq>k){
                mp[s[l]]--;
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};
