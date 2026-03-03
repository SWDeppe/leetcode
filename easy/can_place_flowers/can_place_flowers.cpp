#include <vector>
#include <iostream>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = 1;
        int back_count = 0;
		int i = 0;
		for (int & flower : flowerbed)
		{
			if (!flower)
            {
				count++;
                back_count--;
            }
            if (flower)
            {
				count = 0;
                if (back_count > 0)
                    i--;
            }
			if (count == 2)
			{
				i++;
				count = 0;
                back_count = 1;
			}
		}
		return (i >= n);
    }
};

int main()
{

	Solution sol;
	std::vector<int> flowerbed = { 0, 1, 0, 1, 0, 0, 0, 1};
	int n = 2;
	std::cout << sol.canPlaceFlowers(flowerbed, n) << std::endl;
	std::cout << sol.canPlaceFlowers(flowerbed, 1);
}