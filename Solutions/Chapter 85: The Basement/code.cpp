#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int arr1[3]={0};
	long long int arr2[3]={0};
	
	while(n)
	{
		arr1[(n--)%3]++;
	}
	
	while(m)
	{
		arr2[(m--)%3]++;
	}
	
	unsigned long long int res=arr1[0]*arr2[0] + arr1[1]*arr2[2] + arr1[2]*arr2[1];
	
	cout<<res;
	return 0;
}
