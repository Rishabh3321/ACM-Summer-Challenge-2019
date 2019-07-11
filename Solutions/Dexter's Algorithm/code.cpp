 
#include <bits/stdc++.h> 
using namespace std; 

struct num { 
	long long int b,nu; 
}; 

bool comparenum(num i1, num i2) 
{ 
	return (i1.b < i2.b); 
} 

int main() 
{	
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  
    long long int n,max=0;
    cin>>n;
    num arr[n];
    
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i].nu;
        if(max<arr[i].nu)
        	max=arr[i].nu;
    }
    int min=0;
    while(max%10000!=0)
    {
    	max/=10000;
    	min++;
	}
	
	for(long long int i=1;i<=min;i++)
        {   
            int sum=0;
            for(long long int j=0;j<n;j++)
            {
                arr[j].b=((arr[j].nu)%(long long int)pow(10,4*i))/((long long int)pow(10,4*(i-1)));


            }

            stable_sort(arr, arr + n, comparenum);
            for(long long int j=0;j<n;j++)
            {
                cout<<arr[j].nu<<" ";
            }
            cout<<endl;
            
    
        
    }
    
	return 0; 
} 
