class Solution {
public:
    int climbStairs(int n) {
        long prev1 = 1;
        long prev2 = 2;
        long now = 0;
        
		for (int i = 1; i < n; i++)
		{
			now = prev1 + prev2;
            prev1 = prev2;
            prev2 = now;

        }
		return prev1;
    }
};