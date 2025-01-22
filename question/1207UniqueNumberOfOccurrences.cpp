//
// Created by Cc on 2025/1/21.
//

/**
*1207. Unique Number of Occurrences
简单
相关标签
相关企业
提示
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.



Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true


Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
 */

#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;

        // construct hash map
        for (int i: arr) {
            map[i]++;
        }


        unordered_set<int> distinct;
        for (const auto pair:map) {
            const auto result = distinct.insert(pair.second);
            return !result.second;
        }


    }

};

int main(){
    Solution solution;
    vector<int> arr = {1,2,2,1,1,3};
    solution.uniqueOccurrences(arr);
}