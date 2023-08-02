class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>v;
      map<int,int>m;
      for(auto x:nums)
      m[x]++;
      for(auto y:m){
        if(y.second==1){

        if(m.find(y.first-1)==m.end()&& m.find(y.first+1)==m.end())
          v.push_back(y.first);
      }
        
          }
        
      return v;
    }
};
