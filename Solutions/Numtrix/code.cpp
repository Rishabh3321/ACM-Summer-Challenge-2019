#include<iostream>

using namespace std;

int gcd(int a, int b)
{
   if (b == 0)
   return a;
   return gcd(b, a % b);
}


int main()
{
    int i,j,n,m,ch,count=0;
    int c,d;
    int ex=0;
    cin>>n>>m;

    int a[n][m];
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   
        	cin>>a[i][j];
    	}
	}
    //check for each
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   
            ex=0;
            ch=0;
            if(i+1<n)
            {   
                ex++;
                c=a[i][j];
                d=a[i+1][j];
               if((gcd(c,d))!=1)
               {
                ch++;
               }
                
            }
            if(i-1>-1)
            {   
                ex++;
                c=a[i][j];
                d=a[i-1][j];
               if((gcd(c,d))!=1)
               {
                  ch++;
               }
            }
            if(j+1<m)
            {   
                ex++;
                c=a[i][j];
                d=a[i][j+1];
               if((gcd(c,d))!=1)
                {
                  ch++;
                }
            }
            if(j-1>-1)
            {   
                ex++;
                c=a[i][j];
                d=a[i][j-1];
               if((gcd(c,d))!=1)
                {
                  ch++;
                }
            }
            //cout<<ex<<endl;
            if(ch==ex)
            {
                count++;
                //cout<<a[i][j]<<endl;
            }
          
        }
    }
    cout<<count;
}
