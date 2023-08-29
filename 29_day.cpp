class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x=0,y=0,t=0;
        for(int i=0;i<nums.size();i++){
        if(x<nums[i]){
          x=nums[i];
        t=i;
        }
        }
        cout<<x;
        for(int i=0;i<nums.size();i++){
          if(x>=nums[i] && y<nums[i]&& i!=t)
          y=nums[i];
        }
        cout<<y;
        return (x-1)*(y-1);

    }
};
