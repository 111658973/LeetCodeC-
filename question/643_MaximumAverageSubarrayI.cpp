//
// Created by Cc on 2025/1/10.
//

#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>
using namespace std;

SLIDING_WINDOW("")

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        // init a sliding windows with length k
        double maxAvr = 0;
        double previous_avg = 0;
        for (int i = 0; i < k; i++) {
            maxAvr += static_cast<double>(nums[i]) / k;
            previous_avg = maxAvr;
        }

        //start sliding
        for (int j = 0; j < nums.size() - k; j++) {
            previous_avg -= static_cast<double>(nums[j]) / k;
            previous_avg += static_cast<double>(nums[k + j]) / k;
            maxAvr = max(maxAvr, previous_avg);
        }
        return maxAvr;
    }
};

int main() {
    vector nums = {1, 12, -5, -6, 50, 3};
    // vector nums = {0, 4, 0, 3, 2};
    Solution solution;
    cout << solution.findMaxAverage(nums, 4);
}
