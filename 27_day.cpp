class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int i=0,j=str.length()-1;
        for(int i=0;i<j;i++){
            swap(str[i],str[j]);
            j--;
        }
        return str;
    }
};

