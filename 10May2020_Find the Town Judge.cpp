class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustarray(N + 1, 0);
        for(auto per : trust){
            trustarray[per[0]]--;
            trustarray[per[1]]++;
        }
        for(int i = 1;i <= N;i++){
            if(trustarray[i] == N - 1)
                return i;
        }
        return -1;
    }
};
