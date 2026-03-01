# Climbing stairs

## Desciption

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

### Example 1:

**Input:** n = 2

**Output:** 2

**Explanation:** There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

### Example 2:

**Input:** n = 3

**Output:** 3

**Explanation:** There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

 

Constraints:

    1 <= n <= 45

<a href="https://leetcode.com/problems/climbing-stairs/description/" style="color: white;">>> link <<</a>

## Aproche

First im going to use C++ for this problemes.

1. First approche was to make a nested loop by adding all the possibilities of double steps while searching for how much iteration i will do for each double step occurence i found the right path to go:
2. Fibinnacci while searching for allways more double steps i did 8 -> 34 and 7 -> 21 also 6 -> 13 and realised this is fibonacci suite so up to there i juste made this simple Fibonnaci solution (without recursion juste cause i like to have a fast and memory acceptable solution)  
