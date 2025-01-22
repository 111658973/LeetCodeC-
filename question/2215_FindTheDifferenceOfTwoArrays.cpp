//
// Created by Cc on 2025/1/21.
//


#include "../config/algorithm_tags.h"
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > findDifference(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1, set2;
        for (int num: nums1) {
            set1.insert(num);
        }
        for (int num: nums2) {
            set2.insert(num);
        }

        vector<vector<int> > res(2);

        for (int i: set1) {
            if (!set2.count(i)) {
                res[0].push_back(i);
            }
        }

        for (int i: set2) {
            if (!set1.count(i)) {
                res[1].push_back(i);
            }
        }

        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};
    solution.findDifference(nums1, nums2);

}
