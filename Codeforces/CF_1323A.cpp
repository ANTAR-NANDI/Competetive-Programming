#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[105],i,n,flag=0,test,location,temp=0;
	cin>>test;
	while(test--)
	{
		cin>>n;
		temp=n;
		for(i=0;i<n;i++)
		{
			cin>>array[i];
		}
		for(i=0;i<n;i++)
		{
			if(array[i]%2==0)
			{
				location=i;
				flag=1;
				break;
			}
		}
		
		if(temp==1&&flag==0)
		{
			cout<<"-1"<<endl;
		}
		else if(flag==1)
		{
			cout<<"1"<<"\n"<<location+1<<endl;
		}
		else{
			cout<<"2"<<"\n"<<"1 2"<<endl;
		}
		flag=0;
	
	}
}
