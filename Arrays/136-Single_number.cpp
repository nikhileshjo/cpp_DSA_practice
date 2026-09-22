// https://leetcode.com/problems/single-number/

#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int check = 0;
        for (auto e : nums)
        {
            check ^= e;
        }
        return check;
    }
};