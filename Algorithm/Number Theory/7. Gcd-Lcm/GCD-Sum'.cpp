#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 1000000
int phi[1000000];
void phie()
{
	int i,j;
	phi[1]=1;
	for(i=2;i<=maxn;i++)
	{
		phi[i]=i;
	}
	for(i=2;i<=maxn;i++)
	{
		if(phi[i]==i)
		{
			for(j=i;j<=maxn;j+=i)
			{
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
}
int main()
{
   int n,test,i,d1,d2,res=0;
   phie();
   cin>>test;
   while(test--)
   {
   	cin>>n;
   	int res=0;
   	for(i=1;i*i<=n;i++)
   	{
   		if(n%i==0)
   		{
   			d1=i;
   			d2=(n/i);
   			
   			res+=(d1*phi[n/d1]);
   			cout<<res<<" ";
   			if(d1!=d2)
   			{
   				//cout<<phi[1];
   			   	res+=(d2*phi[n/d2]);
					  cout<<res<<" ";	
			   }
   		
   			
		   }
	}
	   cout<<res;
   }
   
	return 0;
}
