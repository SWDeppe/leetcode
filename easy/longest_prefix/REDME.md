# Longest common prefix

## Desciption

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 


### Example 1:

**Input:** strs = ["flower","flow","flight"]
**Output:** "fl"

### Example 2:

**Input:** strs = ["dog","racecar","car"]
**Output:** ""
**Explanation:** There is no common prefix among the input strings.



Constraints:

    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lowercase English letters if it is non-empty.

 

<a href="https://leetcode.com/problems/climbing-stairs/description/" style="color: white;">>> link <<</a>

## Aproche

First im going to use C++ for this problemes.

1. First approche was to make a nested loop by adding all the possibilities of double steps while searching for how much iteration i will do for each double step occurence i found the right path to go:
2. Fibinnacci while searching for allways more double steps i did 8 -> 34 and 7 -> 21 also 6 -> 13 and realised this is fibonacci suite so up to there i juste made this simple Fibonnaci solution (without recursion juste cause i like to have a fast and memory acceptable solution)