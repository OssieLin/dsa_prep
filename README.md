# some of Data Structures & Algorithms

## Drills for basic String questions on Leetcode

[2011. Final Value of Variable After Performing OperationsLinks to an external site.](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/)

[771. Jewels and StonesLinks to an external site.](https://leetcode.com/problems/jewels-and-stones/description/)

[2114. Maximum Number of Words Found in SentencesLinks to an external site.](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/)

[1773. Count Items Matching a RuleLinks to an external site.](https://leetcode.com/problems/count-items-matching-a-rule/description/)

[1528. Shuffle StringLinks to an external site.](https://leetcode.com/problems/shuffle-string/description/)

[2325. Decode the Message Links to an external site.](https://leetcode.com/problems/decode-the-message/description/)

[1832. Check if the Sentence Is Pangram Links to an external site.](https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/)

[1684. Count the Number of Consistent Strings Links to an external site.](https://leetcode.com/problems/count-the-number-of-consistent-strings/description/)

[1844. Replace All Digits with Characters Links to an external site.](https://leetcode.com/problems/replace-all-digits-with-characters/description/)

[2828. Check if a String Is an Acronym of Words Links to an external site.](https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/)

[2103. Rings and Rods Links to an external site.](https://leetcode.com/problems/rings-and-rods/description/)

[2697. Lexicographically Smallest Palindrome Links to an external site.](https://leetcode.com/problems/lexicographically-smallest-palindrome/description/)

[1812. Determine Color of a Chessboard Square Links to an external site.](https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/)

[2185. Counting Words With a Given Prefix Links to an external site.](https://leetcode.com/problems/counting-words-with-a-given-prefix/description/)

[657. Robot Return to Origin Links to an external site.](https://leetcode.com/problems/robot-return-to-origin/description/)


## #include <[cctype](https://cplusplus.com/reference/cctype/)>: to classify and transform individual characters

isalpha(c): Check if c is alphabetic <br>
isalnum(c): Check if c is alphanumeric <br>
isdigit(c): Check if c is decimal digit <br>
islower(c): Check if c is lowercase letter <br>
isupper(c):	Check if c is uppercase letter <br>
tolower(c): Convert c to lowercase (if it is uppercase) <br>
toupper(c): Convert c to uppercase (if it is lowercase) <br>

**tolower(c) or toupper(c) returns an integer. To converse it to char, use `static_cast<char>(tolower(c))`.**


## [Three-Reverse Algorithm: O(n) time & O(1) space](https://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/)
### [Leetcode 189. Rotate Array](https://leetcode.com/problems/rotate-array/description/)

`Three-reverse Algorithm: (to rotate array k steps to the right, where k equals 3 in this example)`

`Rotate [1,2,3,4,5,6,7]` <br>
`1st reverse for the first nums.size()-k: [4,3,2,1,5,6,7]` <br>
`2nd reverse for the last k numbers: [4,3,2,1,7,6,5]` <br>
`3rd reverse all: [5,6,7,1,2,3,4]`<br>

        k = k % nums.size();
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end());




## [Longest Increasing Sequence](https://leetcode.com/problems/longest-increasing-subsequence)

Step: 
1. Initialize an Empty Vector (dynamic array): Create an empty vector LIS that will dynamically store the increasing subsequence.

2. Iterate Through the Array: For each element `num` in the target array:

Check if `num` can extend the current LIS.
• If `num` is larger than the last element in LIS, append num to the end of LIS.
• If `num` is not larger, find the smallest element in LIS that is greater than or equal to num and replace it with num.
