vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> finalIndices;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    finalIndices = {i, j};
                    return finalIndices;
                }
            }
        }
        return finalIndices;
    }