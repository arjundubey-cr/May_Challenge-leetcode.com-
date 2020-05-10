/****SOLVED BY ARJUN DUBEY***/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        long long int countStone = S.size();
        long long int countJewel = J.size();
        long long count = 0;
        for(int i=0;i<countJewel;i++){
            for(int j=0;j<countStone;j++){
                if(J[i]==S[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
