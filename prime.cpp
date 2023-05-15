#include <bits/stdc++.h>

using namespace std;

int main()
{

	int i;
	int flag = 0;
	int n;

	cin>>n;

	for(i=2;i<n;i++)
	{
		if(n%i==0)
			flag = 1;



	}

	if(flag==1)
		cout<<"not p";
	else
		cout<<"p";
}