#include <vector>
#include <priority_queue>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>> pq;
        int s = 0;
        for(int i = 0; i < nums.size(); i++){
            if (s < k){
                pq.push(nums[i]);
                s++;
            }
            else{
                pq.push(nums[i]);
                pq.pop();
            }
        }
        return pq.top();
    }
};


