#include <iostream>
#include <string>

using namespace std;

//https://zhuanlan.zhihu.com/p/30181688
class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == 0) {
            return "";
        }

        if (numRows == 1) {
            return s;
        }
        //i=︽计;size=V计
        int size = numRows * 2 - 2;
        string res = "";

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.length(); j += size) {
                //睰︽计
                res = res.append(s, j, 1);
                if (i != 0 && i != numRows - 1 && (j - i) + (size - i) < s.length()) {
                    //睰弊︽计
                    res.append(s, (j - i) + (size - i), 1);
                }

            }
        }
        return res;

    }
};

class Solution1 {
public:
    int reverse(int x) {
        string ans = to_string(x);
        string temp = "";
        if (ans[0] == '-') {
            temp = temp + ans[0];
        }
        for (int i = ans.length() - 1; i >= 0; i--) {
            temp = temp + ans[i];

        }
        try {
            return stoi(temp);
        } catch (out_of_range) {
            return 0;

        }


    }
};

class Solution2 {
public:
    int myAtoi(string str) {

    }
};

int main() {
    string str = "91283472332";
    Solution2 aa;
    cout << aa.myAtoi(str) << endl;

    return 0;
}