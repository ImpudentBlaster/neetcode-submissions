class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        const hash = {};
        let result = [];

        for(const i in nums){
            if(hash[target - nums[i]]){
                result = [
                    Math.min(i, hash[target - nums[i]]),
                    Math.max(i, hash[target - nums[i]])
                ]
            }else {
                hash[nums[i]] = i;
            }
        }

        return result;
    }
}
