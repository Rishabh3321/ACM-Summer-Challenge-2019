#include <iostream> 
using namespace std; 


bool isPrime(long long int n) 
{ 
	long long int i = 2; 
	while (i * i <= n) 
	{ 
		if (n % i == 0) 
			return false; 
		i++; 
	} 
	return true; 
} 

int solve(long long int n) 
{ 
	if (isPrime(n)) 
		return 1; 

	if (n % 2 == 0) 
		return 2; 

	if (isPrime(n - 2)) 
		return 2; 

	return 3; 
} 
 
int main() 
{ 
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{   
	    cin>>n;
	    cout << solve(n)<<endl; 
	}
	return 0; 
} 
