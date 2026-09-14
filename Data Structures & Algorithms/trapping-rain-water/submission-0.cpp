class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=1)return 0;
        int l=0,r=height.size()-1,res=0;
        int lm=height[l],rm=height[r];
        res=0;
        while(l<r)
        {
            if(lm<rm)
            {
                l+=1;
                lm=max(lm,height[l]);
                res+=lm-height[l];
            }
            else
            {
                r--;
                rm=max(rm,height[r]);
                res+=rm-height[r];
            }
        }
        return res;
    }
};
