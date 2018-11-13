#Min Cost Climbing Stairs
#
#On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).
#
#Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, and you can either start from the step with index 0, or the step with index 1.
#
#Example 1:
#Input: cost = [10, 15, 20]
#Output: 15
#Explanation: Cheapest is start on cost[1], pay that cost and go to the top.
#




class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       
            uint iMinus2 = cost[0], iMinus1 = cost[1];
            int temp = 0;
            for (int i = 2;i < cost.size(); i++)
            {                
                temp = cost[i] + min(iMinus2, iMinus1);
                
                iMinus2 = iMinus1;
                iMinus1 = temp;
            }
            return min(iMinus2, iMinus1);
    }
};