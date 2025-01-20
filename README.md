# some of Data Structures & Algorithms

## c-type string functions
### [<cctype>](https://cplusplus.com/reference/cctype/): to classify and transform individual characters
isalpha(c): Check if c is alphabetic 
isalnum(c): Check if c is alphanumeric
isdigit(c): Check if c is decimal digit
islower(c): Check if c is lowercase letter 
isupper(c):	Check if c is uppercase letter
tolower(c): Convert c to lowercase (if it is uppercase)
toupper(c): Convert c to uppercase (if it is lowercase)

## [Longest Increasing Sequence](https://leetcode.com/problems/longest-increasing-subsequence)

Step: 
1. Initialize an Empty Vector (dynamic array): Create an empty vector LIS that will dynamically store the increasing subsequence.

2. Iterate Through the Array: For each element `num` in the target array:

Check if `num` can extend the current LIS.
• If `num` is larger than the last element in LIS, append num to the end of LIS.
• If `num` is not larger, find the smallest element in LIS that is greater than or equal to num and replace it with num.
