#include<bits/stdc++.h>
using namespace std;
bool prime(long int n)
{
	int i;
	if(n==1)return false;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	long int test,num;
	bool check;
	cin>>test;
	while(test--){
		cin>>num;
		check=prime(num);
		if(check==false)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
	}
	
	return 0;
}
