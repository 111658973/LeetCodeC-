//
// Created by Cc on 2025/1/23.
//


#include "../config/algorithm_tags.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    queue<int> q;
    Solution() {}

    int ping(int t) {
        q.push(t);
        while(q.front()<t-3000) q.pop();
        return q.size();
    }
};

int main(){

    Solution solution;
    solution.ping(1);
    solution.ping(100);
    solution.ping(3000);
    solution.ping(3001);
    solution.ping(5000);
    solution.ping(6001);

}