#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int si;
        int a = -1;
        si = nums.size();
        for (int i = 0; i < si; i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return a;

    }
};

int main() {
    Solution aa;
    vector<int> array1;
    array1.push_back(2);
    array1.push_back(4);
    array1.push_back(6);
    cout << aa.search(array1, 3) << endl;


    return 0;
}
