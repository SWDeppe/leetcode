#include <iostream>
#include <string>
#include <vector>


class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string ret = strs[0];
		for (const std::string & str: strs)
		{
			int i = 0;
			while (str[i] == ret[i] && str[i] && ret[i])
				i++;
			ret.resize(i);
			if (i == 0)
				continue;
		}
		return ret;
    }
};

int main()
{

	std::vector<std::string> strs = {"hello", "hell", "o"};
	Solution sol; 
	std::cout << sol.longestCommonPrefix(strs);

}