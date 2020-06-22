#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
//https://www.cnblogs.com/grandyang/p/4385822.html
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> m;
        for (string str : strs) {
            string t = str;
            sort(t.begin(), t.end());
            if (!m.count(t)) {
                m[t] = res.size();
                res.push_back({});
            }
            res[m[t]].push_back(str);
        }
        return res;
    }
};

int main() {
    vector<string> cc;
    cc.push_back("abc");
    cc.push_back("bca");
    cc.push_back("ass");
    cc.push_back("sas");
    Solution aa;
    aa.groupAnagrams(cc);

    return 0;
}
