class Solution {
public:
    int minFlips(string s) {
        // odd = rotation
        if (s.size() == 1)
            return 0;
        string copie;
        if (s.size() % 2) {
            // search two consequent
            // bool    prev1 = s[0] - '0';
            // bool    prev2 = s[1] - '0';
            // int     i = 2;
            // while (s[i]) {
            //     if (prev1 == prev2 && s[i] != prev1)
            //         break;
            //     prev1 = prev2;
            //     prev2 = s[i] - '0';
            //     i++;
            // }
            int     i = 0;
            int     longest = 0;
            int     y = 0;
            int     current = 1;
            bool    val = s[0] - '0';
            while (s[++i])
            {
                
                // std::cout << "i is: " << val << std::endl;
                if (s[i] - '0' == val) {
                    current++;
                }
                else
                {
                    val = s[i] - '0';
                    // std::cout << val << "  " << s[i] << std::endl;
                    if (current > longest
                        && current % 2 == 0)
                    {
                        y = i;
                        longest = current;
                    }
                    current = 1;
                }
                // i++;
            }
            // std::cout << current << std::endl;
            if (current > longest
                && current % 2 == 0)
                longest = current;
                // y = i;
            if (longest)
            {
                std::cout << y << std::endl;
                copie = s;
                copie.erase(0, y - 1);
                copie = copie + s.substr(0, y - 1);
                std::cout << copie << std::endl;
            }
            else
                copie = s;
        }
        else 
            copie = s;
        std::cout << copie << std::endl;
        int count1 = 0;
        int count2 = 0;
        bool actual = false;
        for (const char & c : copie) {
            if (c - 48 == actual)
                count1++;
            if (c - '0' != actual)
                count2++;
            actual = !actual;
        }
        return min(count1, count2);
    }
};