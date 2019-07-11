    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin>>n;
        long long int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       
        int q;
        cin>>q;
        while(q>0)
        {
            int ch,l,r;
            cin>>ch>>l>>r;
            l--;
            r--;
            if(ch==1)
            {   
                int t;
                for(t=l;t<=(l+r)/2;t++)
                {
                    swap(a[r+l-t],a[t]);
                }
                
            }
            else 
            {
                long long int  t=0;
                for(;l<=r;l++)
                {
                    t= t + a[l];    
                }
                cout<<t<<endl;
            }
            q--;
        }
        
        return 0;
    }
