//
// Created by Cc on 2025/1/13.
//


#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>

using namespace std;



BRUTE_FORCE("")
class Solution {
  public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        int total = 0;
        for(int i = 0;i < nums.size(); i++ ){
          total += nums[i];
        }
        for(int j = 0; j < nums.size() - 1; j++){
            int left = 0;
            for(int k = 0; k < j+1; k++){
                left += nums[k];
            }
            if(left>=total/2){count++;}
        }
        return count;

    }
};

int main(){
    vector<int> nums = {10,4,-8,7};
    Solution solution;
    solution.waysToSplitArray(nums);
}