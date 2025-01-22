//
// Created by Cc on 2025/1/20.
//


#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int> &nums) {
        int min = 10001;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0;
            }
            int diff = abs(nums[i]);
            if (diff == min) {
                if (nums[i] > min) {
                    min = nums[i];
                }
            }
            if (diff < abs(min)) {
                min = nums[i];
            }
        }
        return min;
    }

    int abs(int i) {
        if (i >= 0) {
            return i;
        }
        return i * -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-4, -2, 1, 4, 8};
    int res = solution.findClosestNumber(nums);
    cout << res;
}
