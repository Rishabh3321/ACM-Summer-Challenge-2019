#include<bits/stdc++.h> 
using namespace std; 


int Array( int arr1[] , int arr2[] , char* str , int n ) 
{ 

	stack<int> stk; 
	int result = 0; 

	for (int i=0; i<n; i++) 					//logic for a valid bracket pair !!!!!
	{ 
		
		if (str[i] == '(') 
		stk.push(i); 

		else 
		{
			if (!stk.empty()) 					//important!!!!!!
			{ 
				arr2[i] = 1; 
				arr1[stk.top()] = 1; 
				stk.pop(); 
			}
			else
				arr2[i] = 0; 
		} 
	} 
	

	for( int i = 1 ; i < n; i++ ) 
	{ 
		result +=arr2[i];
	} 
	
	return result*2;
} 


int main() 
{ 

	char str[100000]; 
	cin>>str;
	int n = strlen(str); 

	int arr1[n+1] ={0}; 		
	int arr2[n+1] ={0}; 		
	
        cout<<Array( arr1 , arr2 , str, n )<<endl; 

	return 0; 
} 
