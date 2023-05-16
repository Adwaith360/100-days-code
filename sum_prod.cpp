#include<bits/stdc++.h>

using namespace std;

int main(){
	

	int n,temp;
	int sum=0, prod= 1;

	cin>>n;

	temp = n;

	while(temp!= 0)
	{

	int e = temp%10;
	sum+=e;
	prod*=e;

	temp/=10;
	}

	cout<<"sum="<<sum;

	cout<<"\nprod="<<prod;
}