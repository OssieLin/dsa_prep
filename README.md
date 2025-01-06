# some of Data Structures & Algorithms
[Longest Increasing Sequence](https://leetcode.com/problems/longest-increasing-subsequence)
Step: 
1. Initialize an Empty Vector (dynamic array): Create an empty vector LIS that will dynamically store the increasing subsequence.

2. Iterate Through the Array: For each element `num` in the target array:

Check if `num` can extend the current LIS.
• If `num` is larger than the last element in LIS, append num to the end of LIS.
• If `num` is not larger, find the smallest element in LIS that is greater than or equal to num and replace it with num.
