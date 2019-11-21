#include <iostream>
#include <vector>

using namespace std;

//https://www.geeksforgeeks.org/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int> &height) {
        int l = 0;  //left
        int r = height.size() - 1; //right
        int area = 0;

        //Base*Height > (N-1)*min(a1,aN)
        while (l < r) {
            // Calculating the max area
            area = fmax(area, fmin(height[l], height[r]) * (r - l));
            //right big move left left big move right
            if (height[l] < height[r])
                l = l + 1;

            else
                r = r - 1;
        }
        return area;
    }

};

int main() {
    return 0;
}