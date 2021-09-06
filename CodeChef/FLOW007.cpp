#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
long int num,sum=0,temp;
	while(t--)
	{
		cin>>num;
		while(num!=0)
		{
			temp=num%10;
			sum=(sum*10)+temp;
			num=num/10;
		}
		cout<<sum<<endl;
		sum=0;
	}
	
	
	return 0;
}
