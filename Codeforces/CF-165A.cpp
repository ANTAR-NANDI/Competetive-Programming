#include<bits/stdc++.h>
using namespace std;
#define i64 long long 
struct s{
	int a,b;
};
int main()
{
	struct s x[201];
	long int test,i,cnt=0,num,num1,j;
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>x[i].a>>x[i].b;
	}
//	for(i=0;i<test;i++)
//	{
//		cout<<x[i].a<<" "<<x[i].b;
//	}
	for(i=0;i<test;i++)
	{
		int c=0,d=0,e=0,f=0;
		num=x[i].a;
		num1=x[i].b;
	//	cout<<num<<" "<<num1;
		for(j=0;j<test;j++)
		{
			if(j!=i)
			{
				if(x[j].a>num&&x[j].b==num1)c=1;
				if(x[j].a<num&&x[j].b==num1)d=1;
				if(x[j].a==num&&x[j].b<num1)e=1;
				if(x[j].a==num&&x[j].b>num1)f=1;
				
			}
		}
		if(c==1&&d==1&&e==1&&f==1)
		cnt++;
	}
     
   cout<<cnt<<endl;
	return 0;
}

