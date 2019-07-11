
#include<bits/stdc++.h>

using namespace std;

vector< pair<int,int> > arr(100000);
vector<bool> marked(100000,false);

int check(vector<int> tree[],int node)
{
	
	for(int i=0;i<tree[node].size();i++)
	{   
	    if(marked[tree[node][i]]==false)
	    {   
	        marked[tree[node][i]]=true;
		    arr[node].second += check(tree,tree[node][i]);
	    }
	}
	if(arr[node].first==-1)	
		arr[node].second++;
	
	return arr[node].second;	
	
}



int main()
{	
	
    int nodes,x,y;
    cin>>nodes;
    arr[0].first=0;
    arr[0].second=0;
    for(int i=1;i<=nodes;i++)
    {
        cin>>x;
        arr[i].first=x;
        arr[i].second=0;
    }
    
	
    vector<int> tree[nodes+1];

    for(int i=1;i<nodes;i++)
    {
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    
    
    marked[1]=true;
    check(tree,1);

    for(int i=1;i<=nodes;i++)
    {
        cout<<arr[i].second<<" ";
    }


    return 0;

}
