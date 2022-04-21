class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count = 0; 
        for(int i = 0; i < jewels.length(); ++i)
        {
            char temp1 = jewels[i];
            for(int j = 0; j < stones.length(); ++j)
            {
                if(temp1 == stones[j])
                    count++;
            }
        }
        return count;
    }
};
