class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int chararray[26] = {0};
        for(char c : p) chararray[c - 'a']++;
        
        vector<int> result;
        int remain = p.size(), j = 0;
        for(int i = 0; i< s.size(); i++)
        {
            while(j < s.size() && j - i < p.size())
            {
                if(chararray[s.at(j++) - 'a']-- > 0)
                {
                    remain--;
                }
            }
            if(remain == 0 && j - i == p.size()) 
            {
                result.push_back(i);
            }
            if(chararray[s.at(i) - 'a']++ >= 0)
            {
                remain++;
            }            
        }
        return result;
    }
};
