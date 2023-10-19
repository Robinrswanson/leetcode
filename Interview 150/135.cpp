#include <vector>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int count = 1;
        int prev = 1;
        int i;
        for (i = 1; i < ratings.size(); i++){
            if (ratings[i] > ratings[i - 1]){
                prev++;
            }
            else{
                prev = 1;
            }
            count += prev;
        }
        i--;
        i--;
        prev = 1;
        int i2;
        while (i >= 0){
            if (ratings[i] > ratings[i + 1]){
                if (i > 0 && ratings[i] > ratings[i - 1]){
                    i2 = i - 1;
                    while (i2 > 0 && ratings[i2 - 1] < ratings[i2]){
                        i2--;
                    }
                    if (i - i2 < prev){
                        count += prev - (i - i2);
                    }
                    i = i2;
                    prev = 1;
                }
                else{
                    count += prev;
                    prev++;
                }
            }
            else{
                prev = 1;
            }
            i--;
        }
        return count;
    }
};