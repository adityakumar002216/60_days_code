class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int x;
        for(int i=0;i<str.length();i++){
            if(str[i]=='C' && str[i+1]=='M'){
            x+=900;
            
            i++;
            }
            else if(str[i]=='C' && str[i+1]=='D'){
            x+=400;
            i++;
            }
            else if(str[i]=='X' && str[i+1]=='C'){
            x+=90;
            i++;
            }
           else if(str[i]=='X' && str[i+1]=='L'){
            x+=40;
            i++;
           }
            else if(str[i]=='I' && str[i+1]=='X'){
            x+=9;
            i++;
            }
            else if(str[i]=='I' && str[i+1]=='V'){
            x+=4;
            i++;
            }
            else if(str[i]=='X')
            x+=10;
            else if(str[i]=='L')
            x+=50;
            else if(str[i]=='C')
            x+=100;
            else if(str[i]=='D')
            x+=500;
            else if(str[i]=='M')
            x+=1000;
            else if(str[i]=='V')
            x+=5;
            if(str[i]=='I')
            x+=1;
            
        }
        return x;
    }
};
