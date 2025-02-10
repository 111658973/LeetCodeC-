//
// Created by Cc on 2025/1/28.
//
/**
* Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
    1
   1 1
  1 2 1
 1 3 3 1



Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]
*/

#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex);
        if(rowIndex == 1){
          return {1};
        }
        int i = 0;
        while(i <= rowIndex - i -1){
          
        }
    }
};

int main(){
    Solution solution;
}