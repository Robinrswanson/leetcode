#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = m - 1;
        int i2 = n - 1;
        nums1.resize(m+n);
        int i3 = m + n - 1;
        while (i1 >= 0 and i2 >= 0){
            if (nums1[i1] > nums2[i2]){
                nums1[i3] = nums1[i1];
                i1--;
                i3--;
            }
            else{
                nums1[i3] = nums2[i2];
                i2--;
                i3--;
            }
        }
        if (i1 >= 0){
            while (i1 >= 0) {
                nums1[i3] = nums1[i1];
                i1--;
                i3--;
            }
        }
        else {
            while (i2 >= 0) {
                nums1[i3] = nums2[i2];
                i2--;
                i3--;
            }
        }
    }
};