#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[100],i,temp,n,j;
	cout<<"Number of Elements :"<<"\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
//				temp=array[j];
//				array[j]=array[j+1];
//				array[j+1]=temp;
              swap(array[j],array[j+1]); 

			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i];
	}
	
}
