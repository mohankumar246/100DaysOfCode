#Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.
#
#Example 1:
#
#Input: 2
#Output: [0,1,1]


class Solution {
public:
    vector<int> countBits(int num) {
        int size  = num +1;
        vector<int> answer(size);
        
        if (size == 1)
            answer[0] = 0;

        if (size == 2)
            answer[1] = 1;

        if (size > 2)
        {
            answer[0]=0;
            answer[1]=1;
            
            int index=2;
            int offset = 0;
            while(index < size)
            {
                if ((index & (index-1)) == 0)
                    offset = 0;
                
                answer[index] =  answer[offset] + 1; 
                
                offset++;                
                index++;
            }
            
        }   
        return answer;
        
    }
};