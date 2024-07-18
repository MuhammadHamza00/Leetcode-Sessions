#include <vector>

class Solution {
public:
    vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int n = candies.size(); 
        vector<bool> result(n); 

        for (int i = 0; i < n; i++) {
            int ele = candies[i] + extraCandies;
            result[i] = true;

            for (int j = 0; j < n; j++) {
                if (ele < candies[j]) {
                    result[i] = false; 
                    break;
                }
            }
        }
        return result;
    }
};
