class Solution {
public:
    int firstUniqChar(string s) {
                ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count[26] = {0};
        for (int i = 0; i < s.size(); ++i) {
            count[s[i] - 'a'] += 1;
        }
        
        for (int i = 0; i < s.size(); ++i) {
            if (count[s[i]-'a'] == 1)
                return i;
        }
        
        return -1;
    }
};
