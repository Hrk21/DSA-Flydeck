/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x> __INT32_MAX__)
            return false;
        else{
            int y = x;
            long int rev = 0;
            while(y>0){
                int last = y%10;
                rev = rev*10 + last;
                y=y/10; 
            }
            if(x == rev)
                return true;
        }
        return false;
    }
};
// @lc code=end

