/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        vector<int>::iterator tt;
        tt = nums.begin();
        for(int i =0 ;i<nums.size();i++)
        {
            if(nums[i] == val){
                nums.erase(tt);
                tt--;
                i--;
            }
            tt++;  
        }
        return nums.size();

    }
};
// @lc code=end

