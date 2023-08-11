class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int n = (int)nums.size();
        int mx = *max_element(nums.begin(),nums.end());
        int i = 0;
        int ans = 0;
        while(i < n) {
            if(nums[i] == mx) {
                int curr = 0;
                while(i < n && nums[i] == mx) {
                    i++;
                    curr++;
                }
                ans = max(ans,curr);
            }
            else {
                i++;
            }
        }
        return ans;
    }
        
    
};
