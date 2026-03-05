#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    int minOperations(std::string s) {
        int missing1 = 0; 
        int missing2 = 0;
        bool actual = true;
        for (const char c : s){
            bool val = c - '0';
            if (actual == val)
                missing1++;
            else if (!actual == val)
                missing2++;
            actual = !actual;
        }
        return std::min(missing1, missing2);
    }
};

int main()
{
	Solution sol;

	std::cout << sol.minOperations("0100") << std::endl;
	std::cout << sol.minOperations("10") << std::endl;
	std::cout << sol.minOperations("1111") << std::endl;
}