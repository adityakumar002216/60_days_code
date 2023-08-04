class Solution {
public:
    int maximumScore(int a, int b, int c) {
       int mx=max(a,max(b,c));
       int mn=min(a,min(b,c));
       int z=a+b+c;
       int middle=z-mn-mx;
       if(mn+middle<=mx)
       return mn+middle;
       else
       return z/2;
        
    }
};
