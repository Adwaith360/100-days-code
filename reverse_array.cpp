#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[100];
	int n;
	int temp;
	int revar[100];

	cout<<"enter n";

	cin>>n;
	cout<<"Enter the array elements \n";

	for(int i =0;i<n;i++){
	cin>>arr[i];

	}
	cout<<endl<<endl;

	for(int i=0;i>=n/2;i++){
		revar[i]=arr[n-1-i];
		revar[n-1-i]= arr[i];
	}

	for(int i=0;i<=n-1;i++)
		cout<<revar[i]<<" ";
}