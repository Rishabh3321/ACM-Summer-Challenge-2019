#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector< vector<int> > tree(100001);
vector<ll> time_taken(100001,INT_MAX);
vector<int> height(100001,-1);


void dfs(int node, int h)
{
    height[node]=h;
    int s=tree[node].size();
    for (int i=0;i<s;i++)
    {
         if (height[tree[node][i]] != -1)
            continue;
        time_taken[h+1] = min(time_taken[h + 1], (ll)node + (ll)tree[node][i]);

        dfs(tree[node][i],h+1);
    }
    return  ;
}


int main()
{
    int n,q,x,y;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    //while dfs update height as well as time taken to reach that node.
    dfs(1,0);

    time_taken[0] = 0;
    for (int i=2; i<=n;i++)
        time_taken[i] += time_taken[i-1];
    cin>>q;

    while(q--)
    {
        cin>>x>>y;
        x=height[x];
        y=height[y];
        //#Caution:
        if(x>y)
            swap(x,y);

        cout<<time_taken[y]-time_taken[x]<<endl;

    }

    return 0;

}
