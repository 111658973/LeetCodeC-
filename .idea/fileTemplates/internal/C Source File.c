#parse("C File Header.h")
#if (${HEADER_FILENAME})
#[[#include]]# "${HEADER_FILENAME}"
#end

#[[#include]]# "../config/algorithm_tags.h"
#[[#include]]# <iostream>
using namespace std;

class Solution {
  #[[]]#
};

int main(){
    Solution solution;
}