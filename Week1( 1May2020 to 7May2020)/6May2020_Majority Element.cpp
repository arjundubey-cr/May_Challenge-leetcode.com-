class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mElement=nums[0];
        int count=0;
            for(int num : nums){
                if(num==mElement)
                    count++;
                else
                {
                    count--;
                    if(count==0)
                    {
                    mElement=num;
                    count++;
                    }
                }
            }
        return mElement;
    }
};
