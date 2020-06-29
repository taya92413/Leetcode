#include <iostream>
#include <vector>

using namespace std;

//https://medium.com/leetcode-%E6%BC%94%E7%AE%97%E6%B3%95%E6%95%99%E5%AD%B8/058-leetcode-122%E6%BC%94%E7%AE%97%E6%B3%95-best-time-to-buy-and-sell-stock-ii-%E8%82%A1%E7%A5%A8%E6%A9%9F%E5%99%A8%E4%BA%BA-ii-41463d9dae12

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len = prices.size();
        int small = INT32_MAX;
        int profit = 0;

        for (int i = 0; i < len; i++) {
            if (prices[i] < small) {
                small = prices[i];
            }
            int now = prices[i] - small;
            if (now > 0) {
                small = prices[i];
                profit += now;//這邊累加所有利潤
            }
        }
        return profit;

    }
};

int main() {
    vector<int> abc;
    abc.push_back(7);
    abc.push_back(1);
    abc.push_back(5);
    abc.push_back(3);
    abc.push_back(6);
    abc.push_back(4);
    Solution aa;
    cout << aa.maxProfit(abc) << endl;

    return 0;
}
