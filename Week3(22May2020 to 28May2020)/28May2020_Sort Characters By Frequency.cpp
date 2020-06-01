class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        priority_queue<pair<int, char>> pq;
        string result;
        
        if (s.length() == 0 || s.length() == 1){
            return s;
        }
        
        for (char c : s) {
            if (map.find(c) != map.end()) {
                map[c]++;
            } else {
                map.insert({c, 1});
            }
        }
        
        for (auto it : map) {
            pq.push({it.second, it.first});
        }
        
        while(!pq.empty()){
            pair<int, char> top = pq.top();
            pq.pop();
            while(top.first > 0){
                result += top.second;
                top.first--;
            }   
        }
        
        return result;
        
    }
};
