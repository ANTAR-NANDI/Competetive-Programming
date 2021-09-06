#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2;
   int i,count=0,len,array[100],temp,flag=0,len1;
   cin>>s1>>s2;
   len=s1.length();
   len1=s2.length();
   for(i=0;i<s1.length();i++)
   {
   	  array[i]=s1[i]-48;
   	  if(array[i]==0)
   	  {
   	  	count++;
		 }
   	  
   }
   sort(array,array+len);//0013
   for(i=0;i<len;i++)
   {
   	 if(array[i]>0)
   	 {
   	 	array[0]=array[i];
   	 	break;
   	 }
   }
   i=1;
   while(count>0)
   {
   	         
		   	
		   	array[i]=0;
		   	i++;
		   	count--;
   }
    for(i=0;i<len;i++)
    {
    	//cout<<array[i]<<" "<<s2[i]-48;
    	int b;
    	b=s2[i]-48;
    	if(array[i]!=b)
    	{
    		flag=1;
    		break;
		}
	}
	if(len!=len1||flag==1)
	{
		cout<<"WRONG_ANSWER"<<endl;
	}
	else{
		cout<<"OK"<<endl;
	}
//cout<<flag;
    
    return 0;
}
