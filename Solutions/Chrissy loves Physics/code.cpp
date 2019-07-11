#include <bits/stdc++.h> //The only way to do this question in given time is to count all inversion taken place in merge sort.
using namespace std; 	 // So copying the mergee sort code form online website .
#define ll long long int 
void merge(ll arr[], ll l, ll m, ll r, ll* count_crossline) 
{ 
	ll i, j, k; 
	ll n1 = m - l + 1; 
	ll n2 = r - m; 

	ll L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	i = 0;  
	j = 0;  
	k = l;  
	while (i < n1 && j < n2)
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else 
		{ 
			arr[k] = R[j]; 
			*count_crossline += (n1 - i); 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(ll arr[], ll l, ll r, ll* count_crossline) 
{ 
	if (l < r) 
	{ 

		ll m = l + (r - l) / 2; 
		mergeSort(arr, l, m, count_crossline); 
		mergeSort(arr, m + 1, r, count_crossline); 
		merge(arr, l, m, r, count_crossline); 
	} 
} 

ll countCrossLine(ll arr[], ll n) 
{ 
	ll count_crossline = 0; 
	mergeSort(arr, 0, n - 1, &count_crossline); 

	return count_crossline; 
} 

int main() 
{ 	
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout << countCrossLine(arr, n) << endl; 
	return 0; 
} 
