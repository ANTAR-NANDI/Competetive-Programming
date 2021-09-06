#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,array[103];
	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		array[i]=i;
//	}
	if(n%2==1){
		cout<<"-1"<<endl;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				cout<<i-1<<" ";
			}
			else{
				cout<<i+1<<" ";
			}
		}
	}
}
