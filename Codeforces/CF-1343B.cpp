#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int array[200001],test,i,sum=0,sum2=0,temp,n,sum1=0,a;
	cin>>test;
	while(test--)
	{
		cin>>n;
		temp=n/2;
		sum=(n*(n+1))/2;
		//cout<<sum;
		for(i=2;i<=n;i+=2)
		{
			sum1+=i;
		}
	//	cout<<sum1;
       a=temp;
		if((sum-sum1)%2==0)
		{
			cout<<"YES"<<endl;
			i=2;
			while(a!=0)
			{
				cout<<i<<" ";
				i+=2;
				a--;
			}
			i=1;
			sum2=0;
			while(temp!=1)
			{
				cout<<i<<" ";
				
				sum2=sum2+i;
				i+=2;
				temp--;
			}
			cout<<sum1-sum2<<endl;
			
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
		sum1=0,sum=0,sum2=0,temp=0,a=0;
		
	}
	return 0;
}
