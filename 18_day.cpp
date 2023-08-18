class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        v.push_back(a[n-1]);
        int x=a[n-1];
        for(int i=n-1;i>0;i--){
            if(a[i-1]>=x){
            x=a[i-1];
            
                v.push_back(x);
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
