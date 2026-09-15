class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums) {
        const vector=[];
        for(let  i=0;i<nums.length;i++) vector.push(nums[i]);
        for(let  i=0;i<nums.length;i++) vector.push(nums[i]);
        return vector;
    }
}
