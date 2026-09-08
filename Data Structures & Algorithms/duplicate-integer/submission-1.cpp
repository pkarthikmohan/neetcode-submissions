class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n(nums.begin(),nums.end());
        return n.size()<nums.size();
    }
};