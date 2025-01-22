//
// Created by Cc on 2025/1/21.
//

/**
*
代码
测试用例
测试结果
测试结果
724. Find Pivot Index
已解答
简单
相关标签
相关企业
提示
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.



Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0


Constraints:

1 <= nums.length <= 104
-1000 <= nums[i] <= 1000

 */

#include "../config/algorithm_tags.h"
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(),0);
        int sum = 0 ;
        for (int i =0 ; i< nums.size(); i++) {
            // 用除法会有小数被省略导致结果不对
            if ( 2* sum +nums[i]==total) {
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {-1,-1,-1,-1,-1,-1};
    solution.pivotIndex(nums);

}