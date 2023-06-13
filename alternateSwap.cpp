#include<bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[],int size){

for(int i = 0;i<size-2;i+=2){
swap(arr[i],arr[i+1]);
}

}

int main(){
	
	int arr[5]={4,5,3,6,3};

	int n = 5;

	swap(arr,n);

	for(int i =0;i<=n-1;i++){
	 cout<<arr[i]<<" ";
	}

}