# Two Sum

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution.

## Example

```text
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
```

## Approach

I used an `unordered_map` to store each number and its index.

For every element:

1. Calculate the required complement:
   `target - nums[i]`
2. Check whether the complement already exists in the map.
3. If it exists, return the two indices.
4. Otherwise, store the current number and its index.

## Complexity

- Time Complexity: **O(n)**
- Space Complexity: **O(n)**

## Language

**C++**

## LeetCode

- Problem: **Two Sum**
- Platform: **LeetCode**
- Solution: `01-two-sum.cpp`
- Result: `01-two-sum-result.png`