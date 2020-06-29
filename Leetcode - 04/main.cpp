#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int pushback = 0;
        double mid = 0;

        for (int i = 0; i < nums2.size(); i++) {
            pushback = nums2[i];
            nums1.push_back(pushback);
        }
        sort(nums1.begin(), nums1.end());

        if (nums1.size() % 2 == 0) {;
            mid =  (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2 - 1)])/ 2.0;
        } else {
            mid = nums1[(nums1.size() - 1) / 2];
        }
        return mid;
    }
};

int main() {
    Solution cc;
    vector<int> aa = {1, 2};
    vector<int> aa1 = {3, 4};
    cout << cc.findMedianSortedArrays(aa, aa1) << endl;

    return 0;
}

