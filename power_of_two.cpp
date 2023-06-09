class Solution {
public:
    bool isPowerOfTwo(int n) {
        long ans=1;
        bool flag=false;

        while(flag!=true && ans<=INT_MAX){
            if(ans==n)
            flag=true;
            ans*=2; 
        }
    return flag;
    }
};