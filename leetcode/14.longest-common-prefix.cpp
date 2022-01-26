/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        int count = 0;
        int min = 1000;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<min)
            {
                str = strs[i];
                min = strs[i].size();
            }
        }
        for(int i=0;i<str.size();i++){
            for(int j =0 ;j<strs.size();j++){
                if(str[i] != strs[j][i])
                {
                    return str.substr(0,count);
                }
            }
            count++;
        }
         return str.substr(0,count);
    }
};
// @lc code=end

