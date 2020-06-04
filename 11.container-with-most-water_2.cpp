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
        int headPoint = 0;
        int endPoint = height.size() - 1;
        long int max = 0;
        while(headPoint < endPoint)
        {
            long int area = (endPoint - headPoint) * std::min(height[headPoint], height[endPoint]);
            if (area > max)
            {
                max = area;
            }
            (height[headPoint] < height[endPoint]) ? headPoint++ : endPoint--;
        }
        return max;
    }
};

// int main()
// {
//     vector<int> height{1,8,6,2,5,4,8,3,7};
//     // for (size_t i = 15000; i > 0; i--)
//     // {
//     //     height.push_back(i);
//     // }
//     Solution s;
//     cout << s.maxArea(height) << endl;
//     return 0;
// }
// @lc code=end

