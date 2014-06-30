// Given a string, determine if it is a palindrome, considering only alphanumeri// c characters and ignoring cases.

// For example,
// "A man, a plan, a canal: Panama" is a palindrome.
// "race a car" is not a palindrome.

// Note:
// Have you consider that the string might be empty? This is a good question to ask during an interview.

// For the purpose of this problem, we define empty string as valid palindrome.<

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i < j) {
            while(i < j && !isalpha(s[i]) && !isdigit(s[i])) ++i;
            while(i < j && !isalpha(s[j]) && !isdigit(s[j])) --j;
            if(i >= j) return true;
            if(isalpha(s[i]) && isalpha(s[j])) {
                if(s[i] == s[j] || abs(s[i]-s[j]) == 32) {
                    ++i;
                    --j;
                } else return false;
            } else if(isdigit(s[i]) && isdigit(s[j])) {
                if(s[i] == s[j]) {
                    ++i;
                    --j;
                } else return false;
            } else return false;
        }
        return true;
    }
};
