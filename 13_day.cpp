class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
       vector<int>v;
       long long  sum=0;
       if(k>=nums.size()){
         for(int i=0;i<nums.size();i++)
         nums[i]=-1;
         return nums;
       }
       for(int i=0;i<k;i++) 
       v.push_back(-1);
       int x=0;
       int size=2*k;
       if(size<nums.size()){
       for(int i=0;i<size+1;i++)
       sum+=nums[i];
       v.push_back(sum/(size+1));
       }
      
      x=0;
      while(x>=0 && x+size<nums.size()-1){
         sum-=nums[x];
         sum+=nums[x+size+1];
         x++;
         v.push_back(sum/(size+1));
      }
      
        for(int i=0;i<nums.size()-(k+x+1);i++)
        v.push_back(-1);
     if(size>=nums.size())
    v.push_back(-1);
      
       
       return v;
    }
};
