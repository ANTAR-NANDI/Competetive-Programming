#include<bits/stdc++.h>
#define N 50
using namespace std;
int ar[N][N],I[N][N];
int i,j,k;
void mul(int A[][N],int B[][N],int dim)// i a dim
{
	int res[dim+1][dim+1];
	for(i=1;i<=dim;i++)
	{
		 for(j=1;j<=dim;j++)
		 {
		 	res[i][j]=0;
		      for(k=1;k<=dim;k++)
		      
		      	 res[i][j] += A[i][k] * B[k][j];
		        cout<<res[i][j]<<endl;
			  
	       
		 }
	}
	  
	     
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			A[i][j]=res[i][j];
			//cout<<A[i][j];
		}
	}
}
void power(int A[][N],int dim,int n)
{
	//Declearing identity Matrix
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			if(i==j)
			{
				I[i][j]=1;
			}
			else
			I[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		mul(I,A,dim);
	}
	
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			A[i][j]=I[i][j];
		}
	}
}
void print(int A[][N],int dim)
{
	for(i=1;i<=dim;i++)
	{
		for(j=1;j<=dim;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int test,dim,n;
	cin>>test;
	while(test--)
	{
		cin>>dim>>n;
		for(i=1;i<=dim;i++)
		{
			for(j=1;j<=dim;j++)
			{
				cin>>ar[i][j];
			}
		}
		power(ar,dim,n);
		//print(ar,dim);
	}
   
   
    return 0;

}
//3
//2 2
//0 1
//1 1
