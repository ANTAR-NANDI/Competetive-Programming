#include<bits/stdc++.h>
using namespace std;


long long rec_gcd(long long i, long long j){  
	if(j%i==0){
		return i;
	}
	rec_gcd(j%i, i);
}
long long build_gcd(long long i, long long j){

	return __gcd(i,j);
}
long long gcd(long long i, long long j){
//	if(i>=j){
//		long long swap =i;//4 6
//		i=j;
//		j=swap;
//	}
	long long result;
	while(1){
		if(j%i==0){
			result =i;
			break;
		}
		else{
			long long temp = j%i;//temp=2;
			j=i;//j=4;
			i=temp;//i=2;
		}
	}
	return result;
}
long long normalgcd(long long i, long long j){

	long long m,result,k;
	m=min(i,j);
	for(k=1;k<=m;k++)
	{

	    if(i%k==0&&j%k==0)
	    {
	        result=k;
	    }

	}
	return result;
}

int main(){

	long long n,m;
	while(1){
		cin>>n>>m;
		cout<<"GCD is : "<<normalgcd(n,m)<<"\n"<<"Lcm is "<<(n*m)/normalgcd(n,m)<<endl;

	}

	return 0;
}
