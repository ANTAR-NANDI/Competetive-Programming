#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 80003
bitset <max> mark;
int main()
{
	ll test,num,sq,i,j,n,limit;
	 mark.set();

            mark[0] = mark[1] = 0;
             for(i=2;i*i<=max;i++){
             	if(mark[i])
             	{
             		for(j=i*i;j<=max;j+=i)
             		{
             			mark[j]=0;
					 }
				 }
			 }
            for(i=2;i<=max;i++)
            {
            	if(mark[i])
            	{
            		cout<<i<<" ";
				}
			}
    
	return 0;
}

