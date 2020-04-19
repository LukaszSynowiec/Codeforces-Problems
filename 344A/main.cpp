#include <iostream>
using namespace std;
int main()
{
	int x;

	cin>>x;
	int groups=1;
	string s[x];
	for(int i=0;i<x;i++)
	{
		cin>>s[i];
	}
	string current=s[0];
	for(int i=1;i<=x;i++)
	{
		if(s[i-1]!=current)
		{
			groups++;
			current=s[i-1];
		}
	}
	cout<<groups;
	return 0;
}

