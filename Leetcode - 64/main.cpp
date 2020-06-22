#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//https://www.itread01.com/content/1545256634.html

class Solution {
public:
    int minPathSum(vector<vector<int>> &grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 1; i < n; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < m; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);

            }
        }
        return grid[m-1][n-1];


    }
};

int main() {
    vector<int> array1;
    vector<int> array2;
    vector<int> array3;
    vector<vector<int>> array4;
    array1.push_back(1);
    array1.push_back(3);
    array1.push_back(1);
    array2.push_back(1);
    array2.push_back(5);
    array2.push_back(1);
    array3.push_back(4);
    array3.push_back(2);
    array3.push_back(1);

    array4.push_back(array1);
    array4.push_back(array2);
    array4.push_back(array3);

    Solution aa;
    cout << array3.size() << endl;
    cout << array4[0].size() << endl;
    cout << aa.minPathSum(array4) << endl;
    //cout << array4[1][1] << endl;
    return 0;
}
