impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let n=nums.len();
        let mut pre=1;
        let mut post=1;
        let mut res=vec![1; n];
        for i in 0..n{
            res[i]=pre;
            pre*=nums[i];
        }  
        for i in (0..n).rev(){
            res[i]*=post;
            post *=nums[i];
        }
        res
    }
}
