class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int k = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[k] == nums[i]) {
                return true;
            }
            k++;
        }

        return false;
    }
};