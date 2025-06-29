class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it : nums){
            if(mp[it]>1) return true;
        }
        return false;
    }
};