class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>v;
        unordered_map<int,int>m;
        // int arr[nums.size()];
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        for(int j=0;j<nums.size();j++)
        if(m[nums[j]]==1)
        v.push_back(nums[j]);
        sort(v.begin(),v.end());
        return v;
    }
};
