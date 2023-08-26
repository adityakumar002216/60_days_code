class Solution{
public:
    void Reverse(stack<int> &St){
        vector<int>v;
        while(St.size()){
            int x=St.top();
            v.push_back(x);
            St.pop();
            
            
        }
        int i=0;
        while(i<v.size()){
            St.push(v[i]);
            i++;
        }
        
    }
};
