cmake_minimum_required(VERSION 3.27)
project(LeetcodeC__)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetcodeC__ main.cpp
        question/283_MoveZeros.cpp
        question/3066_MinimumOperationsToExceedThresholdValue.cpp
        question/3095_ShortestSubarrayWithORAtLeastK_I.cpp
        question/2239_FindClosestNumberToZero.cpp
        question/724_FindPivotIndex.cpp
        question/2215_FindTheDifferenceOfTwoArrays.cpp
        question/1207UniqueNumberOfOccurrences.cpp
        question/1561_MaximumNumberOfCoinsYouCanGet.cpp
        "question/933_NumberOfRecent Calls.cpp"
        "question/238_ProductOfArrayExceptSelf.cpp"
        question/119_PascalsTriangleII.cpp
        question/104_Maximum_DepthOfBinaryTree.cpp
)
