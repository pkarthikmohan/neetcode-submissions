impl Solution {
    pub fn trap(height: Vec<i32>) -> i32 {
        if height.len() <= 1 {
            return 0;
        }

        let mut l = 0;
        let mut r = height.len() - 1;

        let mut lm = height[l];
        let mut rm = height[r];

        let mut res = 0;

        while l < r {
            if lm < rm {
                l += 1;
                lm = lm.max(height[l]);
                res += lm - height[l];
            } else {
                r -= 1;
                rm = rm.max(height[r]);
                res += rm - height[r];
            }
        }

        res
    }
}