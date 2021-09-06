#include<bits/stdc++.h>//10 2 8 1 2 4 1 20 4 5
using namespace std;//1 3 1 2 4 6
int main()
{	
	long int array[130],i,x,y,n,j,m,array1[130],temp,array2[130],k,p;
	vector<int> v;
	cin>>n;
	array[n]=0;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	sort(array,array+n);//131248//112348
	temp=array[n-1];
	j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(temp%array[i]==0)
		{
			array1[j]=array[i];
			j++;
		}
		else{
			array2[k]=array[i];
			k++;
		}
	}
	m=j;
	sort(array1,array1+m);
	for(i=0;i<m;i++)
	{
		if(array1[i]==array1[i+1])
		{
			array2[k]=array1[i];
			k++;
		}
		else{
			v.push_back(array1[i]);
		}
	}
//	for(i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
//	for(i=0;i<k;i++)
//	{
//		cout<<array2[i]<<" ";
//	}
     sort(array2,array2+k);
     sort(v.begin(),v.end());
     cout<<v[v.size()-1]<<" "<<array2[k-1]<<endl;
	
	return 0;
}



