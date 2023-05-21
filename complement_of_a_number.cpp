#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	
	cin>>n;

	int c= n;

	int mask = 0;


	while(c!=0){

	c=c>>1;
	mask = (mask<<1)|1;

	}

	int ans = mask & (~n);

	if(n==0)
	ans = 1;

	cout<<"complement = "<<ans;
}