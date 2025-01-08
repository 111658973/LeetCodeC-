//
// Created by Cc on 2025/1/8.
//


/**
* 2264. Largest 3-Same-Digit Number in String
尝试过 简单
You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.


Example 1:

Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
Example 2:

Input: num = "2300019"
Output: "000"
Explanation: "000" is the only good integer.
Example 3:

Input: num = "42352338"
Output: ""
Explanation: No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.


Constraints:

3 <= num.length <= 1000
num only consists of digits.
*/
# include<iostream>
#include "../config/algorithm_tags.h"
using namespace std;



class Solution {
public:
    BRUTE_FORCE
    string largestGoodInteger(string num) {
        if (num.length() < 3) {
            return "";
        }
        int count = 0;
        char max = 0;
        for (int i = 0; i < num.length() - 1; i++) {
            if (num[i] == num[i + 1]) {
                count++;
                if (count == 2) {
                    if(num[i]>max){
                        max = num[i];
                    }
                    count = 0;
                }
            } else {
                count = 0; // 遇到不同的字符，重置 count
            }
        }
        if (max == 0) {
            return "";  // 没有找到 "good integer"，返回空字符串
        }
        return string(3, max);  // 找到 "good integer"，返回对应字符串
    }
};


int main(){
    string s = "6777133339";
    Solution solution;
    const string res = solution.largestGoodInteger(s);
    cout << res;

}