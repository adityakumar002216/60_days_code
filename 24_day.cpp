class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>v;
        multiset<int>s;
        for(int i=0;i<n;i++)
        s.insert(arr[i]);
        for(int j=0;j<n;j++){
        if(s.count(arr[j])==2){
        
        
        v.push_back(arr[j]);
        break;
        }
        }
        for(int i=1;i<=n;i++){
        if(s.count(i)==0){
        v.push_back(i);
        break;
        }
        }
        return v;
    }
};
