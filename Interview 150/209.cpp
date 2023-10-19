#include <vector>
#include<limits.h>

using namespace std;

class Solution {
public:
int minSubArrayLen(int target, vector<int>& nums) {
    int l = 0, r = 0;
    int res = INT_MAX;
    int curr = 0;
    int len = nums.size();

    while (r < len) {
        curr += nums[r];
        while (curr >= target) {
            res = min(res, r - l + 1);
            curr -= nums[l];
            l++;
        }
        r++;
    }
    return res == INT_MAX ? 0 : res;
}
};