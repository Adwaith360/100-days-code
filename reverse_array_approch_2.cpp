#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[100];
	int n;
	int a;

	cout<<"enter n";

	cin>>n;
	cout<<"Enter the array elements \n";

	for(int i =0;i<n;i++){
	cin>>arr[i];

	}
	cout<<endl<<endl;

	for(int i=0;i<n/2;i++){
		a=arr[i];
		arr[i]=arr[n-i-1] ;
		arr[n-i-1]=a;
	}

	for(int i=0;i<=n-1;i++)
		cout<<arr[i]<<" ";
}