#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,t,i,d,e,f,g;
  cin >> n;
  vector<int> even;
  vector<int> odd;
    for (i = 0; i < n; i++)
    {
   		cin >> t;
   		even.push_back(t);
   		i++;
   		if (i < n)
        {
   			cin >> t;
    		odd.push_back(t);
    	}
    }
 	//Let index of min element of even part id d
    auto result = min_element(even.begin(), even.end());
    d = distance(even.begin(), result);
    e = ((even.size() - d) < d) ? (even.size() - d) : d;


	rotate(even.begin(), result, even.end());
	if (is_sorted(begin(even), end(even)))
	{
		auto  result = min_element(odd.begin(),odd.end());
		f = distance(odd.begin(), result);
 		g = ((odd.size() - f) < f) ? (odd.size() - f) : f;

		rotate(odd.begin(), result, odd.end());
		if (is_sorted(begin(odd), end(odd)))
		{
			if (n % 2)
			odd.push_back(100001);
			int final = e + g;
			if (even < odd)
			{
				    cout << "YES" << endl << final;
    			  return 0;
		  }
		}
 	}

 	cout << "NO";
  return 0;
}
