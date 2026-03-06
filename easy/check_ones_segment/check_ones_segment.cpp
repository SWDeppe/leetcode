#include <string>
#include <iostream>


class Solution {
public:
    bool checkOnesSegment(std::string s) {
        bool leadingZ = false;
        bool b;
        for (const char & c : s) {
            b = c - 48;
            if (!leadingZ && !b)
                leadingZ = true;
            else if (!b ^ leadingZ)
                return false;
        }
        return true;
    }
};

int main()
{
	Solution sol;

	std::cout << sol.checkOnesSegment("1100") << std::endl;
	std::cout << sol.checkOnesSegment("0100") << std::endl;
	std::cout << sol.checkOnesSegment("1110") << std::endl;
	std::cout << sol.checkOnesSegment("1010") << std::endl;

}