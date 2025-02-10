//
// Created by Cc on 2025/1/23.
//


#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();

        vector<int> L(length,0) ,R(length,0);

        //contruct array L[i] which represent the product of elements before the index i
        L[0] = 1;
        for(int i = 1;i < length; i++){
          L[i] = L[i-1] * nums[i-1];
        }


        // construct arr R[i] which represents the product of elements after the index i
        R[length-1] = 1;
        for(int j = length-2;j >= 0; j--){
            R[j] = R[j+1] * nums[j+1];
        }



        vector<int> res(length);
        for(int i = 0 ;i < length; i++){
              res[i] = L[i] * R[i];
        }

        return res;


    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,3,4};
    solution.productExceptSelf(nums);
}