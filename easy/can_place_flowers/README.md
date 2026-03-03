# Can place flowers 

## Desciption

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

### Example 1:

**Input:** flowerbed = [1,0,0,0,1], n = 1
**Output:** true

### Example 2:

**Input:** flowerbed = [1,0,0,0,1], n = 2
**Output:** false

 

Constraints:

    1 <= flowerbed.length <= 2 * 104
    flowerbed[i] is 0 or 1.
    There are no two adjacent flowers in flowerbed.
    0 <= n <= flowerbed.length


<a href="https://leetcode.com/problems/can-place-flowers/description/" style="color: white;">>> link <<</a>

## Aproche

First im going to use C++ for this problemes.

1. I think there is not a lot to say i just loop in the flowerbed foreach time i see a flower i add one in the counter and have another counter to see if i have another dif with the next flower and if there is not enoouth different drop the plantable counter down 
