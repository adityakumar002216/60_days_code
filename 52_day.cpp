class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        vector<int>v;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(i-2>=0&& arr[i-2]==arr[i-1]&& arr[i-1]!=arr[i] )
            v.push_back(arr[i-1]);
           
        }
         if(arr[n-2]==arr[n-1])
            v.push_back(arr[n-1]);
        if(v.empty())
        return {-1};
        return v;
    }
};
