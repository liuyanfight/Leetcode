/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        long int max = 0;
        for (size_t i = 0; i < height.size(); i++)
        {
            for (size_t j = i+1; j < height.size(); j++)
            {
                int minHeight = std::min(height[i], height[j]);
                long int area = (j - i) *minHeight;
                if ( area > max)
                {
                    max = area;
                }
            }
        }
        return max;
    }
};

// int main()
// {
//     vector<int> height{};
//     for (size_t i = 15000; i > 0; i--)
//     {
//         height.push_back(i);
//     }
//     Solution s;
//     cout << s.maxArea(height) << endl;
//     return 0;
// }
// @lc code=end

