 class Solution {
public:
    string decodeString(string s) {

        stack<int> i;
        stack<char> c;
        int n,j,k,x;
        string temp ;
        string res ;
        .

        for(j=0;j<size(s);j++ )   
        {
            if(isdigit(s[j])){
            i.push(s[j]);
            continue;}

            if(isalpha(s[j]) && s[j]!=']'){
                while(s[j]!='[')
                {
                x=c.pop();
                temp+=x;

                }
            }

            if(s[j]==']')
            {
                while(s[j]!='[')
 
                {
                    temp+=
                }
                
            }
            


        }     
        return res;
    }
};