class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> counts;
    for(int n:nums) counts[n]++;
    int n=nums.size();
    vector<vector<int>> b(n+1);
    for(auto [val,freq]:counts)
    {
        b[freq].push_back(val);
    }
    vector<int> results;
    for(int i=n;i>=0 && results.size()<k;i--)
    {
        for(int num:b[i])
        {
            results.push_back(num);
            if(results.size()==k) 
            return results;
        }
    }return results;
    }
};
