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

## [Three-Reverse Algorithm: O(n) time & O(1) space](https://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/)
### What it is: An in-place algorithm to rotate array that optimizes time and space.

### [Leetcode 189. Rotate Array:](https://leetcode.com/problems/rotate-array/description/)
`Rotate [1,2,3,4,5,6,7]` <br>
`To rotate array k steps to the right, where k equals 3 in this example` <br>
`1st reverse for the first nums.size()-k: [4,3,2,1,5,6,7]` <br>
`2nd reverse for the last k numbers: [4,3,2,1,7,6,5]` <br>
`3rd reverse all: [5,6,7,1,2,3,4]`<br>

        k = k % nums.size();
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end());

which is essentially the `std::rotate` provided by algorithm: `rotate(nums.begin(), nums.end()-k, nums.end())`


## [Longest Increasing Sequence](https://leetcode.com/problems/longest-increasing-subsequence)
### What it is: A subsequence of a given sequence in which the subsequence's elements are sorted in an ascending order and in which the subsequence is as long as possible.
e.g. <br>
`given [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]` <br>
`the LIS is not exclusive: 
        [0, 2, 6, 9, 11, 15] 
        [0, 4, 6, 9, 11, 15] 
        [0, 2, 6, 9, 13, 15] 
        [0, 4, 6, 9, 13, 15]
`


Step: 
1. Initialize an Empty Vector (dynamic array): Create an empty vector LIS that will dynamically store the increasing subsequence.

2. Iterate Through the Array: For each element `num` in the target array:

Check if `num` can extend the current LIS.
• If `num` is larger than the last element in LIS, append num to the end of LIS.
• If `num` is not larger, find the smallest element in LIS that is greater than or equal to num and replace it with num.
