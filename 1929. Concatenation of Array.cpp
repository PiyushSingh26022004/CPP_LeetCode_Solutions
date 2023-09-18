class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         vector<int> m;
         for(int i=0; i<nums.size();i++)
         {
             m.push_back(nums[i]);
         }
             for(int i=0; i<nums.size();i++)
         {
             m.push_back(nums[i]);
         }
         return m;
    }
};
