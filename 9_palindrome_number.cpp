#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int ind;

        if(str.size() == 1) {
            return true;
        } else if(str.size() == 2) {
            return str[0] == str[1];
        }

        if(str.size() % 2 == 0) {
            ind = str.size()/2 - 1;
        } else {
            ind = str.size()/2;
        }

        for(int i = 0; i < ind + 1; i++) {
            if(str.at(i) != str.at(str.size() - 1 - i)) {
                return false;
            }
        }

        return true;
    }
};