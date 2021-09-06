#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
   set<int>::iterator it;
	int test,i,num;
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>num;
		s.insert(num);
	}
	cout<<"The sizeof se is "<<s.size()<<endl;
	cout<<"Set Sort The Value And Remove Duplicate : "<<endl;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	
	if(s.empty())
	{
		cout<<"The set is empty"<<endl;
	}
	else{
		cout<<"Not empty"<<endl;
	}
	
	//Multiset Keeps duplicate value whereset doesn't.....
	multiset<int> mul;
	int d;
	cout<<"Enter Value for Multiset : "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>d;
		mul.insert(d);
	}
	for(it=mul.begin();it!=mul.end();it++)
	{
		cout<<*it<<" ";
	}
}
