class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(),nums.end());
        int longest=0;
        for(auto n :num)
        {
            if(!(num.contains(n-1))) 
            {
                int length=0;
                while((num.contains(n+length)))
                {
                    length++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};
