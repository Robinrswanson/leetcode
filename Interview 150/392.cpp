#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;
        int s_len = s.length();
        int t_len = t.length();
        while (sp < s_len && tp < t_len){
            if (s[sp] == t[tp]) sp++;
            tp++;
        }
        return sp == s_len;
    }
};