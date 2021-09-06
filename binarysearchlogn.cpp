#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k = 1,t[88],n=5,x=5,i;
	for(i=1;i<=n;i++)
	{
		cin>>t[i];
	}
	 for (int b = n/2; b >= 1; b /= 2)
	 { 
	 while (k+b <= n && t[k+b] <= x) 
	    k += b; 
	 } 
	 if (t[k] == x) {
	   cout<<k;
	 }
	// cout<<(n/2);
}
