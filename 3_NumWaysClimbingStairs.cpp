#Climbing Stairs
#You are climbing a stair case. It takes n steps to reach to the top.
#
#Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
#
#Note: Given n will be a positive integer.
#
#Example 1:
#
#Input: 2
#Output: 2
#Explanation: There are two ways to climb to the top.
#1. 1 step + 1 step
#2. 2 steps



class Solution {
public:
    int climbStairs(int n) 
    {
        if (n == 1)
            return 1;

        int first = 1, second = 2, temp = 0;
        
        for (int i=3 ; i <= n; i++)
        {
            temp   = first + second;
            first  = second;
            second = temp;
        }

        return second;
    }
};