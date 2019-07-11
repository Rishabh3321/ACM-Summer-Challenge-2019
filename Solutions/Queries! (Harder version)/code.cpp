#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long long int a[n],t;
	
	cin>>a[0];
	for(int i =1;i<n;i++)
	{
		cin>>t;
		*(a+i) = t + *(a+i-1);
	}

	int q,ch,l,r;
	long long int b,c;
 	
	cin>>q;
	
	while(q-->0)
	{
		cin>>ch>>l>>r;
		l--;
		r--;

		if(ch==1)
		{	
			        vector <long long int> re;	
				for(int i=l;i<=r;i++)
				{
					
					if(i!=0)
						re.push_back(*(a+i)-*(a+i-1));
					else 
						re.push_back(*(a+i));
				}
				if(l!=0)
					c=*(a+l-1);
				else 
					c=0;
          
				int size = r-l;
				
				for(int i=l;i<=r;i++)
				{
					*(a+i)= c + re[size-i+l];
					c=*(a+i);
				}
        
		}
		
		else 
		{	
			if(l!=0)
				cout<<*(a+r)-*(a+l-1)<<endl;
			else 
				cout<<*(a+r)<<endl;
		}
	}
}
