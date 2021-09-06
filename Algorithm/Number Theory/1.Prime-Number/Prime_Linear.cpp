#include<bits/stdc++.h>
using namespace std;
int prime_linear(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
long long int prime_sqrt(long long n)
{
	int i,flag=0;
	long long limit=(int)sqrt(n);
	for(i=2;i<=limit;i++)
	{
		if(n%i==0)
		{
			flag=1;
		    break;
		}
		
	}
	return flag;

}
long long int prime_sqrt_2(long long n)
{
	long int i,flag=0;

	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
long long int efficient_prime(long long n){
	long int flag=0,i;
	if(n==1||n%2==0)
	{
		flag=1;
	}
	if(n==2)
	flag=0;
	for(i=3;i*i<=n;i+=2)
	{
		if(n%2==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	long long n,i,flag=0;
	cin>>n;
	int k=efficient_prime(n); 
	if(k==1)
	{
		cout<<"not prime Number";
	}
	else{
		cout<<"Prime";
	}
}
