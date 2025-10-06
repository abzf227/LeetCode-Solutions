#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> chars;

        int length = 0;
        int index = 0;

        for(int i = 0; i < s.size(); i++) {
            while(chars.count(s.at(i))) {
                chars.erase(s.at(index)); index++;
            }

            chars.insert(s.at(i));
            length = std::max(length, i - index + 1);
        }

        return length;
    }
};