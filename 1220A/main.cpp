#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	string str;
	cin>>str;
	int z=0;
	int n=0;
	for(int i=0;i<x;i++)
	{
		if(str[i]=='z')
			z++;
		if(str[i]=='n')
			n++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"1 ";
	}
	for(int i=0;i<z;i++)
	{
		cout<<"0 ";
	}

	return 0;
}

