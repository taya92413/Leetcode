//
// Created by Mike on 2020/4/24.
//
#include <iostream>
#include<algorithm>
#include <vector>

#ifndef LEETCODE___14_LONGESTCOMMONPREFIX_H
#define LEETCODE___14_LONGESTCOMMONPREFIX_H

using namespace std;

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        // If size is 0, return empty string
        if (n == 0)
            return "";

        if (n == 1)
            return strs[0];

        // Sort the given array
        sort(strs.begin(), strs.end());

        // Find the minimum length from
        // first and last string
        int en = min(strs[0].size(),
                     strs[n - 1].size());

        // Now the common prefix in first and
        // last string is the longest common prefix
        string first = strs[0], last = strs[n - 1];
        int i = 0;
        while (i < en && first[i] == last[i])
            i++;

        string pre = first.substr(0, i);
        return pre;
    }
};


#endif //LEETCODE___14_LONGESTCOMMONPREFIX_H
