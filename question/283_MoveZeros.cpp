//
// Created by Cc on 2024/6/28.
//

/**
* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
* Note that you must do this in-place without making a copy of the array.
*
* Example 1:
*
* Input: nums = [0,1,0,3,12]
* Output: [1,3,12,0,0]
* Example 2:
*
* Input: nums = [0]
* Output: [0]
*
* Constraints:
*
* 1 <= nums.length <= 10^4
* -2^31 <= nums[i] <= 2^31 - 1
**/


#include <vector>
using namespace std;

class Solution1 {
public:
    /**
     *  move the element after 0 and record the number of 0, then add 0 to the end of the array
     * @param nums
     */
    void moveZeroes(vector<int> &nums) {
        int count = 0;
        int size = nums.size();

        for(int i = 0;i<nums.size();i++) {
            if(nums[i]==0) {
                count++;

                for(int j = i;j<size-1;j++) {
                    nums[j] = nums[j+1];
                }
            }

        }
        for(int i = 1;i<=count;i++) {
            nums[size - i] == 0;
        }

    }

    void bf(vector<int> &nums){}



};



int main() {
}
