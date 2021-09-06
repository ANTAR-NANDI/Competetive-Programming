#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 90000000
vector<long int> v;
bitset <max> mark;
void seive()
{
	int i,j;
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
			 v.push_back(2);
            for(i=3;i<=max;i+=2)
            {
            	if(mark[i])
            	{
            		v.push_back(i);
				}
			}
}
int main()
{
	//vector<long int> v;
	ll test,num,sq,i,j,n,limit;
	cin>>test;
	seive();
	while(test--)
	{
		cin>>n;
	
		cout<<v[n-1]<<endl;
	}
    
	return 0;
}

