/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    double handlMedianValue(vector<int>& A, vector<int>& B)
    {
        const int m = A.size();
        const int n = B.size();
        int iMin = 0, iMax = m, i = 0, j = 0; 
        while(iMin <= iMax)
        {
            i = (iMin + iMax) / 2;
            j = (m + n + 1) / 2 - i;
            // cout << "Before iMin " << iMin << " iMax " << iMax << " i:" << i << " j:"<<j<< endl;
            if (i < iMax and B[j-1] > A[i])
            {
                iMin = i + 1;
            }
            else if (i > iMin and A[i-1]>B[j])
            {
                iMax = i - 1;
            }
            else
            {
                double maxL = 0;
                if (i == 0)
                    maxL = B[j-1];
                else if (j == 0)
                    maxL = A[i - 1];
                else
                {
                    maxL = A[i - 1] > B[j-1] ?A[i - 1] : B[j-1];
                }
                    
                if ((m + n) % 2)
                {
                    return maxL;
                }
                else
                {
                    double minR = 0;
                    if (i == m)
                        minR = B[j];
                    else if (j == n)
                        minR = A[i];
                    else
                        minR =  A[i] < B[j] ? A[i]  : B[j];

                    return (maxL + minR) / 2;
                } 
            }
            // cout << "After iMin " << iMin << " iMax " << iMax << endl;
        }
        return 0;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return nums1.size() > nums2.size()? handlMedianValue(nums2, nums1) : handlMedianValue(nums1, nums2);        
    }
    
};

// int main()
// {
//     Solution s;
//     vector<int> nums1{};
//     vector<int> nums2{1};
//     cout << s.findMedianSortedArrays(nums1, nums2) << endl;
//     return 0;
// }
// @lc code=end

