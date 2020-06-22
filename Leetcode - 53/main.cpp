#include <iostream>
#include <vector>

using namespace std;

//https://ithelp.ithome.com.tw/articles/10213270
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];//最大子陣列和
        int curr = nums[0]; //當前這個元素或是最大子陣列和
        for(int i = 1; i < nums.size(); i++) {
            curr += nums[i];
            if (curr < 0 || nums[i] > curr)
                curr = nums[i];
            if (res < curr)
                res = curr;
        }
        return res;
    }

};
int main() {

    return 0;
}
