#include<bits/stdc++.h>
using namespace std;



int main() {
        
        int x;
        cin>>x;
        string j;

        j= to_string(x);

        int n=j.size();

        if(x<0)
            n=n-1;

        int res=0;

        for(int i=0;i<n;i++){
            
            int e = x%10;

            res= res + e*pow(10,n-i-1);
            x/=10;
        }

        cout<< res;
        
    }