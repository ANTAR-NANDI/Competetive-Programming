#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num,sum=0,test,temp;
	cin>>test;
	while(test--)
	{
		cin>>num;
		while(num!=0)
		{
			temp=num%10;
			sum+=temp;
			num/=10;
		}
		cout<<sum<<endl;
		sum=0;
		
		
	}
	
	return 0;
}
 
