#include<bits/stdc++.h>

using namespace std;

int main(){
	

	int n;
	int i;
	int arr[33];
	int j;

	cin>>n;

	for( j=0;n!=0;j++)
	{
		i= n%2;
		n/=2;
		arr[j]=i;

		
	}
	 for (j=j-1;j>=0;j--)
	 	cout<<arr[j];

}