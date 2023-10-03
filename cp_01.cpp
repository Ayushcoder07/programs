#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c=0;
	cin>>n;
	if(n==1 || n==2 || n==3 || n==4 || n==5)
	{
		c=1;
		cout<<c<<endl;
	}
	else{
	m=n;
	while(m>5)
	{
		m=m-5;
		c++;
	}
	if(m==1 || m==2 || m==3 || m==4 || m==5)
	{
		cout<<c+1<<endl;
	}
	else if(m==0){
		cout<<c<<endl;
	}
}
}
