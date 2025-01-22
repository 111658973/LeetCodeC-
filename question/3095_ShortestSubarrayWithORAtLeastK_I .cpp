//
// Created by Cc on 2025/1/16.
//


/**
* 3095. Shortest Subarray With OR at Least K I
简单
相关标签
相关企业
提示
You are given an array nums of non-negative integers and an integer k.

An array is called special if the bitwise OR of all of its elements is at least k.

Return the length of the shortest special non-empty
subarray
 of nums, or return -1 if no special subarray exists.



Example 1:

Input: nums = [1,2,3], k = 2

Output: 1

Explanation:

The subarray [3] has OR value of 3. Hence, we return 1.

Note that [2] is also a special subarray.

Example 2:

Input: nums = [2,1,8], k = 10

Output: 3

Explanation:

The subarray [2,1,8] has OR value of 11. Hence, we return 3.

Example 3:

Input: nums = [1,2], k = 0

Output: 1

Explanation:

The subarray [1] has OR value of 1. Hence, we return 1.



Constraints:

1 <= nums.length <= 50
0 <= nums[i] <= 50
0 <= k < 64
 */

#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int count = -1;
        for(int num : nums){
            cout << "k:    " + bitset<8>(k).to_string() + "----" + std::to_string((k))<< endl;
            cout << "nums: " + bitset<8>(num).to_string() + "----" + std::to_string((num))<< endl;
            cout << "res:  " + bitset<8>(num | k).to_string() + "----" + std::to_string((num|k))<< endl;
            if(num | k >= k){
                count++;
            }

        }
        return count;
    }
};

int main(){
    vector<int> nums = {1, 2, 3};
    Solution solution;
    solution.minimumSubarrayLength(nums, 2);

}