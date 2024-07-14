class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(; i+1<n; i++)
        {
            if(nums[i] == nums[i+1]) break;
        }
        if(i == n) return n;
        for(int j=i+1; j<n;j++)
        {
            if(nums[i] != nums[j])
            {
                nums[++i] = nums[j];
            }
        }

        return ++i;
    }
};