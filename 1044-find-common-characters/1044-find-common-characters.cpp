class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        /* vector<string> result;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int minCount = INT_MAX;
            for (string word : words) {
                int count = 0;
                for (char c : word) {
                    if (c == ch) {
                        count++;
                    }
                }
                minCount = min(minCount, count);
            }
            for (int i = 0; i < minCount; i++) {
             result.insert(ch);
            }
        }
         vector<int> last = count(words[0]);
        for (int i = 1; i < words.size(); i++) {
            last = intersection(last, count(words[i]));
        }*/
       
        vector<int> last = count(words[0]);
        for (int i = 1; i < words.size(); i++) {
            last = intersection(last, count(words[i]));
        }
        
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (last[i] > 0) {
                result.push_back(string(1, 'a' + i));
                last[i]--;
            }
        }
        
        return result;
    }
    
private:
    vector<int> count(const string& str) {
        vector<int> frequency(26, 0);
        for (char c : str) {
            frequency[c - 'a']++;
        }
        return frequency;
    }
    
    vector<int> intersection(const vector<int>& a, const vector<int>& b) {
        vector<int> t(26, 0);
        for (int i = 0; i < 26; i++) {
            t[i] = min(a[i], b[i]);
        }
        return t;
    }
};