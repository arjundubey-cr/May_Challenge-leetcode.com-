class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int maxSize = nums.size();
        if (maxSize == 1){
            return nums[0];
        }
        //sort(nums.begin(), nums.end());
        for(int i=0;i<maxSize;i=i+2)
        {
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
