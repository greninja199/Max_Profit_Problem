# Max_Profit_Problem
In this problem you are give a right angled triangle matrix. There are n values at n levels. Like if level is 1 there is 1 value stored at that level, if level is 10 then there are 10 values stored in that level. Every value is a integer. You start from level 1. You have to pick the integer and make the maximum sum out of all the elements possible, given that you can go to the value directly below you or just one right of the directly below value. Find the max possible sum.
Example-
Given 4 row matrix
1
2 3
4 5 6
20 7 2 1
ANSWER is 27.
From Level 1 you pick value 1, bag_value=1.
From Level 2 you pick value 2, bag_value=3.
From Level 3 you pick value 4, bag_value=7.
From Level 4 you pick value 20, bag_value=27.

# Solution
File-: "bottomTop.cpp"
