#include <iostream>
#include "LongestCommonPrefix.h"

using namespace std;

int main() {
    //https://www.geeksforgeeks.org/longest-common-prefix-using-sorting/
    LongestCommonPrefix aa;
    string ar[] = {"geeksforgeeks", "geeks",
                   "geek", "geezer"};
    vector<string> vec;
    for (int i = 0; i < 4; i++) {
        vec.push_back(ar[i]);
    }

    //int n = sizeof(ar) / sizeof(ar[0]);
    cout << "The longest common prefix is: "
         << aa.longestCommonPrefix(vec);

    //https://exfast.me/2017/01/c-sharp-leetcode-easy-136-single-number/
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    int ans = nums[0];
    //use xor to determine different number
    for (int i = 1; i < nums.size(); i++) {
        ans = ans ^ nums[i];
        cout << ans << endl;
    }
    return 0;
}
