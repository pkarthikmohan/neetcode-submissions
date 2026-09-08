class Solution {
public:
    bool isPalindrome(string s) {
         int i = 0;
        int j = s.length() - 1;
        
        while (i < j) {
            if (! isalnum(static_cast<unsigned char>(s[i]))) {
                i++;
            } else if (! isalnum(static_cast<unsigned char>(s[j]))) {
                j--;
            } else if (tolower(static_cast<unsigned char>(s[i++])) != tolower(static_cast<unsigned char>(s[j--]))) {
                return false;
            }
        }
        
        return true;
    }
};
