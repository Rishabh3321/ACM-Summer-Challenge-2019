#include<bits/stdc++.h>

using namespace std;

struct part
{
	int sz;
	string s;	
};

bool comp(part a,part b)
{
	int res=(a.s).compare(b.s);
	if (res>0)
	return true;
	else 
	return false;	
}
bool complen(part a,part b)
{
	return a.sz<b.sz;
}


int main()
{
	int n;
	cin>>n;
	part arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].s;
		arr[i].sz=(arr[i].s).size();		
	}
	sort(arr,arr+n,comp);
	stable_sort(arr,arr+n,complen);
	int q,r;
	cin>>q;
	for(int i=0;i<q;i++)
	{	
		cin>>r;
		cout<<arr[r-1].s<<endl;
	}
}
