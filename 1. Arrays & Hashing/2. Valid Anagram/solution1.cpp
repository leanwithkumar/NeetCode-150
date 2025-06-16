class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char, int>mp1;
        map<char, int>mp2;
        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            mp2[t[i]]++;
        }
        for(auto it : s){
            if(mp1[it] != mp2[it]) return false;
        }
        return true;
    }
};