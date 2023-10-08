class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        int ans=INT_MIN;
        int k=0;
        int size=tasks.size();
        for(int i=0;i<processorTime.size();i++){
            for(int j=0;j<4;j++){
            ans=max(processorTime[i]+tasks[tasks.size()-1-k],ans);
            k++;
            }
            
        }
        return ans;
        
    }
};
