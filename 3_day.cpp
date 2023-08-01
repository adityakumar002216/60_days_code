class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      long long sum=0;
      int r=INT_MAX;
      int k=0;

      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        while(sum-nums[k]>=target){
          sum-=nums[k];
          k++;
        }
        if(sum>=target)
          r=min(r,i-k+1);
          
          

        }
        if(r==INT_MAX)
          return 0;
          return r;
    }
};
