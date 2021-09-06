#include<bits/stdc++.h>
using namespace std;

long long arr[100000];
void div(long long n)
{
    long long i;
    for(i=1;i<=n;i++)
    {

        if(n%i==0)
        {

            cout<<i<<" ";
        }
    }
}
void divisor(long long n){
	long long i=1,j,k=0;
	for(j=1; j*j<=n; j++){
		if(n%j==0){
			arr[k++] = j;
			arr[k++] = n/j;

		}
	}
//	cout<<k<<" ";
   sort(arr,arr+k);
	for(i=0; i<k; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	long long n=10000000;
	divisor(n);

	return 0;
}
