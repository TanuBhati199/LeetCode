class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) return 0;  
        int n = haystack.length();
        int m = needle.length();
        
        if (m > n) return -1;  

        for (int i = 0; i <= n - m; ++i) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i;  
            }
        }
        return -1;  
    }
};
