class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector<int>v;
      multiset<int>m;
      for(int i=0;i<k;i++)
      m.emplace(nums[i]);
      v.push_back(*(m.rbegin()));
      
      int x=0;
      while(k<nums.size()){
        auto it=m.find(nums[x]);
        m.erase(it);
        m.emplace(nums[k]);
        k++;
        x++;
        
        v.push_back(*(m.rbegin()));
      }
     
        
        return v;
    }
};
