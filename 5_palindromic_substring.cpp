#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        size_t left = 0;
        size_t right = s.length() - 1;
        string ans;

        while(left != s.length()) {
            for(size_t j = right; j >= 0; --j) {
            
            }
        } return ans;
    }
};