class Solution {
public:
    vector<int> countBits(int n) {
      int k=0;
      vector<int>v;
      v.push_back(0);
      for(int i=1;i<=n;i++)
      {
        int u=i;
        while(u)
        {
          if(u&1 == 1)
          {
          k++;
          }
          u=u>>1;


        }
        v.push_back(k);
        k=0;
      }
        return v;
    }
};
