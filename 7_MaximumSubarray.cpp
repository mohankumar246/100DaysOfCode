#Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
#
#Example:
#
#Input: [-2,1,-3,4,-1,2,1,-5,4],
#Output: 6
#Explanation: [4,-1,2,1] has the largest sum = 6.

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum=nums[0], maxSum=nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (sum < 0)
                sum = nums[i];
            else
                sum = nums[i] + sum;

            maxSum = max(sum, maxSum);
        }

        return maxSum;
    }
};