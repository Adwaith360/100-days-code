#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int num;

	string s;
	cin>>num;
	s= to_string(num);
	int arr[100];

	int n= s.size();

	cout<<n;

	cout<<endl;

	for(int i=0;i<=n-1;i++){
	int e = num%10;
	arr[n-1-i]=e;
	 num/=10;

	}

	for(int i=0;i<=n-1;i++)
	{
		cout<<arr[i]<<" ";
	}


}