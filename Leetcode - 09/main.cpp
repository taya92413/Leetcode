#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=1;
        string xxx="";
        xxx = to_string(x);
        int len = xxx.size();
        for (int i = 0; i < (len / 2); i++) {
            if (xxx[i] != xxx[len - i - 1]) {
               ans=0;

            }
        }
        return ans;
    }
};

int main() {
    Solution aa;
    cout << aa.isPalindrome(1000021) << endl;

    return 0;
}