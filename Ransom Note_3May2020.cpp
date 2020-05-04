class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    if(ransomNote.empty())
            return true;
        if(magazine.empty() || ransomNote.size() > magazine.size())
            return false;
        
        unordered_map<char,int> ransomMap;
        for(auto i : ransomNote) {
            ransomMap[i]++;
        }
		for(auto i : magazine) {
            if(ransomMap.find(i) != ransomMap.end()) {
                if(--ransomMap[i] == 0) {
                    ransomMap.erase(i);
                }
            }
            if(ransomMap.empty())
                return true;
        }
        return false;
    }
};
