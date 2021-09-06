#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int n,i,cnt=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	if(__gcd(i,n)==1)
   	cnt++;
   }
   cout<<cnt;
	return 0;
}
