/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (37.74%)
 * Likes:    3831
 * Dislikes: 190
 * Total Accepted:    796.9K
 * Total Submissions: 2.1M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> quq{};
        quq.resize(s.size());
        for (size_t i = 0; i < s.size(); i++)
        {
            if (quq.back() != 0)
            {
                if (s[i] == ')' and quq.back() == '(')
                {
                    quq.pop_back();
                }
                else if (s[i] == ']' and quq.back() == '[')
                {
                    quq.pop_back();
                }
                else if (s[i] == '}' and quq.back() == '{')
                {
                    quq.pop_back();
                }
            }
            else
            {
                quq.push_back(s[i]);
            }
        }
        if (quq.size() > 0)
        {
            return false;
        }
        return true;
    }
};

// int main()
// {
//     Solution so;
//     vector<string> s = {"()", "()[]{}","(]", "([)]","{[]}","]"};
//     vector<bool> result = {true, true, false, false, true,false};
//     for(int i = 0; i < s.size(); i++)
//     {
//         if (result[i] != so.isValid(s[i]))
//         {
//             cout << "ERR: " << s[i] << ", Expected: " << boolalpha << result[i] << endl;
//         }
//     }
//     return 0;
// }
// @lc code=end

