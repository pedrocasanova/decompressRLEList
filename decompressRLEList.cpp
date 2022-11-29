class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector <int> decompressedList, currList;
        for(char i = 0; i < nums.size(); i+=2)
        {
            for(char j = 0; j < nums[i]; j++)
            {
                currList.emplace_back(nums[i+1]);
            }
            decompressedList.insert(decompressedList.end(), currList.begin(), currList.end());
            currList.clear();
        }
        return decompressedList;
    }
};