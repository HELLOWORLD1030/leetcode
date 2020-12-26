# leetcode
# 这是我的leetcode刷题笔记，我会在这里记录我的刷题思路和代码
## 1.两数之和
对应twoSum.cpp
### 题目：
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

 

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
### 题解
因为题目要求数组的元素只能使用一次。那我就放弃遍历的方法，先取出数组的第一个元素，将target减去这个元素，得到一个值，再去遍历数组里剩下的值，如果有匹配了，就提前返回，如果没找到。就返回一个空的vector
# 2.移除元素
## 题目
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

 

示例 1:

```c++
给定 nums = [3,2,2,3], val = 3,

函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。

你不需要考虑数组中超出新长度后面的元素。
```
示例 2:
```c++
给定 nums = [0,1,2,2,3,0,4,2], val = 2,

函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。

注意这五个元素可为任意顺序。

你不需要考虑数组中超出新长度后面的元素。
```
## 题解
一开始理解错误，理解成要把数组中的元素真实删掉，然后就判断值是否等于val，相等的话，就把那个值和vector的最后一个元素的值做交换。然后把最后一个值pop_back掉。这样是错的。
后来理解，先遍历，遇到和val相等的值，一样的交换，但是交换完了，vector的索引和代表vector最后一个元素的索引必须减一，这样就不是真实删除数组，而是标记删除。将相同的挪到数组后面去。
