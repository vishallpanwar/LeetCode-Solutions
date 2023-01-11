class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        // i pointer for 1st iteration
        for(int i = 0;i < nums.size();i++)
        {
            // j pointer for 2nd iteration
            for(int j = i + 1;j < nums.size();j++)
            {
                
                // If the sum of array of i and j pointer is equal to target, then return i,j
                if ((nums[i] + nums[j]) == target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};