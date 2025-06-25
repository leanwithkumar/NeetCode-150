class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        for(int i=0; i<n; i++){
            string temp = strs[i];
            ans+=to_string(temp.size())+'#'+temp;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int n = s.size();
        for(int j=0; j<n; i++){
            i = j;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            i = j+1;
            j = i+len;
            string temp = s.substr(i, len);
            ans.push_back(temp);
        }
        return ans;
    }
};

