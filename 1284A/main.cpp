#include <iostream>
using namespace std;
int main()
{
	int x,y,q;
	cin>>x>>y;
	string s[x];
	string t[y];

	for(int i=0;i<x;i++)
	{
		cin>>s[i];
	}
		for(int i=0;i<y;i++)
	{
		cin>>t[i];
	}
	cin>>q;

	int years[q];
	for(int i=0;i<q;i++)
	{
		cin>>years[i];
	}

	for(int i=0;i<q;i++)
	{
		string com1;
		string com2;
		if(years[i]%x==0)
			com1=s[x-1];
		else
			com1=s[years[i]%x-1];
		if(years[i]%y==0)
			com2=t[y-1];
		else
			com2=t[years[i]%y-1];
		
		cout<<com1+com2<<endl;
	}

	return 0;
}

