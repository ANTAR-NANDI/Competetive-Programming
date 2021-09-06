#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int test,array[100001],i,n,value=0,sum=0,m,m1,sum1=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>value;// 1 2 4 3 3
		array[value]=array[value]+1;
	}
//	cout<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<endl;
//sum=0,sum1=0,m=0,m1=0;
		sum=sum+array[4];

	if(array[3]>array[1])
	{
		m=min(array[3],array[1]);
		sum=sum+m;
        sum+=array[3]-array[1];
        if(array[2]%2==0&&array[2]!=0)
        {
        	sum+=(array[2]/2);
		}
		else if(array[2]!=0){
			sum=sum+(array[2]/2)+1;
		}
		
       
	}
	else{
		m=min(array[3],array[1]);
		sum+=m;
	//	sum+=array[1]-array[3];
		array[1]-=m;
		sum1=(array[1]*1+(array[2]*2));
		if(sum1%4==0&&sum1!=0)
		{
			sum=sum+(sum1/4);
		}
		else if(sum1!=0){
			sum=sum+(sum1/4)+1;
		}
		
	}
	if(array[4]==n)
	{
		cout<<array[4]<<endl;
	}
	else
	cout<<sum<<endl;
	//sum=0;
	return 0;
}
