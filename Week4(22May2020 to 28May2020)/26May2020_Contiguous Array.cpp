class Solution {
public:
    int findMaxLength( vector<int>& nums ) {
        if( nums.size() == 0 ) return 0;
        int maxLen = 0, prefixSum = 0;
        unordered_map<int, int> hash; // prefixSum => index
        for( int i=0; i < nums.size(); i++ ) {
            if( nums[i] == 1 ) prefixSum++;
            else prefixSum--;
            
            if( hash.find( prefixSum ) != hash.end() )
                maxLen = max( maxLen, i - hash[prefixSum] );
            else
                hash[prefixSum] = i;
            
            if( prefixSum == 0 )
                maxLen = i + 1;       
        }
        return maxLen;
    }
};
