class Solution {
public:
    int divisorSubstrings(int num, int k) {
      long int s=1;
      int r=0;
     for(int i=0;i<k;i++)
         s*=10;
         int y=s;
         int t=1;
         while(1){
          int ans=num%s;
          if(num==ans)
          break;
          ans=ans/t;
                if(ans!=0 && num%ans==0)
          r++;
          t*=10;
          s*=10;

         }
         cout<<t<<" "<<s;
         int p=num/t;
         
         if(p!=0 && num%p==0)
         r++;
        return r;
    }
};
