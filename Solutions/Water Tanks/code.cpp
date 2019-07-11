#include <bits/stdc++.h> 
using namespace std; 


int maxDiff (int arr[], int n) 
{ 

	int diff = arr[1]-arr[0]; 
	int curr_sum = diff; 
	int max_sum = curr_sum; 

	for(int i=1; i<n-1; i++) 
	{ 
		diff = arr[i+1]-arr[i]; 
		
		if (curr_sum > 0) 
			curr_sum += diff; 
		else
			curr_sum = diff; 
		

		if (curr_sum > max_sum) 
			max_sum = curr_sum; 
	} 

	return max_sum; 
} 


int main() 
{ 
        int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{	
	     cin>>arr[i];
	}
	
	long long int re = maxDiff(arr,n);
	if(n<=1||re<=0)
	{
	    cout<<"0";
	}
	else
	{   
	    re*=k;
            cout<<re; 
	}
    return 0; 
} 
