#include <bits/stdc++.h> 
using namespace std; 


long long int maxLen(long long int arr[], long long int n) 
{ 
	unordered_map<long long int, long long int> presum; //Feels good learning new concept of unordere_map YEAHHH;

	long long int sum = 0;	 
	long long int max_len = 0; 

 
	for(long long int i=0; i<n; i++) 
	{ 
		sum += arr[i]; 

		if (arr[i]==0 && max_len==0) 
			max_len = 1; 
		if (sum == 0) 
			max_len = i+1; 

		if(presum.find(sum) != presum.end()) 
		{ 
			max_len = max(max_len, i-presum[sum]); 
		} 
		else
		{ 
			presum[sum] = i; 
		} 
	} 

	return max_len; 
} 

int main() 
{ 
	long long int n,temp;
	cin>>n;
	long long int arr[n];
	
	for(long long int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp==0)
			arr[i]=-2;
		else 
			arr[i]=1;	
	}	
	cout<<maxLen(arr, n); 

	return 0; 
} 
