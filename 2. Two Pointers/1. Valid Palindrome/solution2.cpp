class Solution {
public:
bool isalum(char c){
    if(
        c>='A' && c<='Z' || 
        c>='a' && c<='z' ||
        c>='0' && c<='9'
    ) return true;
    else return false;
}
    bool isPalindrome(string s) {
       
        string str1 = "";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                str1+=tolower(s[i]);
            }
        }
        string str2 = str1;
        reverse(str2.begin(), str2.end());
        if(str1==str2) return true;
        else return false;
    }
};
