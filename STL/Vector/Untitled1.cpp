#include<bits/stdc++.h>
using namespace std;
int main()
{
	//decleare vector
	vector<int> vec;
	vector<char> ch;
	vector<int> vec1;
	vector<int>::iterator it;
	vec1.push_back(19);
	vec1.push_back(29);
	vec1.push_back(39);
	vec1.push_back(49);
	cout<<"Vector with iteratr : "<<endl;
	for(it=vec1.begin();it!=vec1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	int n,i,a;
	cin>>n;
	cout<<"Vector with input : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a;
		//input vector
		vec.push_back(a);
	}
	cout<<"Vector with normal : "<<endl;
	for(i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	//sort vector with dec;
	sort(vec.begin(),vec.end(),greater<int>());
	cout<<endl;
	cout<<"after sorting(dec)) the vector is : ";
	for(i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	int chinput;
	char c;
	cout<<"Input with Character(Enter Sizeof String)"<<endl;
	cin>>chinput;
	for(i=0;i<chinput;i++)
	{
		cin>>c;
		ch.push_back(c);
	}
	for(i=0;i<ch.size();i++)
	{
		cout<<ch[i]<<" ";
	}
	
	 
}
