#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int curr = nums[0];
        int new_i = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == curr){
                count++;
            }
            else {
                count = 1;
                curr = nums[i];
            }
            if (count < 2){
                nums[new_i] = nums[i];
                new_i++;
            }
        }
        return new_i;
    };
};