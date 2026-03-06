# Check if Binary String Has at Most One Segment of Ones

## Desciption

Given a binary string s ​​​​​without leading zeros, return true​​​ if s contains at most one contiguous segment of ones. Otherwise, return false.
 

### Example 1:

**Input:** s = "1001"
**Output:** false
**Explanation:** The ones do not form a contiguous segment.

### Example 2:

**Input:** s = "110"
**Output:** true

 

Constraints:

- 1 <= s.length <= 100
- s[i]​​​​ is either '0' or '1'.
- s[0] is '1'.


<a href="https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description" style="color: white;">>> link <<</a>

## Aproche

First im going to use C++ for this problemes.

1. So i will loop over the string by checking i have the is leading and is one are different if not retrun false once it becomes a zero first it sets the leading bool to one 