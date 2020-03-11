/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (44.87%)
 * Likes:    12869
 * Dislikes: 457
 * Total Accepted:    2.4M
 * Total Submissions: 5.4M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            auto value = target - nums[i];
            auto it = mp.find(value);
            if (it != mp.end() and it->second != i)
            {
                return{i, it->second};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};

// void print(vector<int> nums)
// {
//     for(auto& i : nums)
//     {
//         cout << i << ", ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     Solution so;
//     vector<int> nums{2, 7, 11, 15};
//     print(so.twoSum(nums, 9));
//     cout << "The result should be [0, 1]" << endl;
//     vector<int> nums2{2, 5, 5, 15};
//     print(so.twoSum(nums2, 10));
//     cout << "The result should be [1, 2]" << endl;
//     return 0;
// }
// @lc code=end

