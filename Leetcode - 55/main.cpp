#include <iostream>
#include <vector>

using namespace std;

//https://hackmd.io/@Zero871015/S1JFXHxaN?type=view
class Solution {
public:
    bool canJump(vector<int> &nums) {
        int index = 0;
        for (int i = 0; i <= index; i++) {
            index = index < i + nums[i] ? i + nums[i] : index; //判斷最遠走去哪格

            cout << index << endl;
            if (index >= nums.size() - 1) {
                return true;
            }
        }
        return false;

    }
};

int main() {
    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    a.push_back(1);
    a.push_back(4);

    Solution aa;
    cout << aa.canJump(a);
    return 0;
}
