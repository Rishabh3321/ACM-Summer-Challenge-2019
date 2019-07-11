#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
	string str;
	int n,k;
	cin>>n>>k;
	cin>>str;
	
	long long int result = 0,x=0; 
	int frequency[n+1] = {0}; 

	frequency[0] = 1; 
	
	for (int i = 0; i < n; i++) 
	{ 
    	    x += (str[i] - '0'); 
            if (x>=k) 
		    result += frequency[x-k]; 
	    frequency[x]++; 
	} 
	
        cout<<result; 
	return 0; 
} 
